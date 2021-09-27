import PropertyRegistration from "../../build/contracts/PropertyRegistration.json";
import Config from "./config.json";
import Web3 from "web3";
import express from "express";
import cors from "cors";
import bodyParser from "body-parser";

let config = Config["localhost"];
let web3 = new Web3(new Web3.providers.WebsocketProvider(config.url.replace("http", "ws")));
web3.eth.defaultAccount = web3.eth.accounts[0];
let PropertyRegistrationApp = new web3.eth.Contract(PropertyRegistration.abi, config.appAddress);

const app = express();
app.use(cors());
app.use(bodyParser.json());

app.get("/registeredProperties", (req, res) => {
    PropertyRegistrationApp.methods
        .getRegisteredProperties()
        .call()
        .then(response => {
            return res.status(200).json({ success: response });
        })
        .catch(error => {
            return res.status(500).json({ error: error });
        });
});

app.post("/registerProperty", (req, res) => {
    let newProperty = req.body;
    let ownerName = newProperty.ownerName;
    let ownerId = newProperty.ownerId;
    let passCode = newProperty.passCode;
    let propertyType = newProperty.propertyType;
    let propertyAddress = newProperty.propertyAddress;
    let propertyDimensions = newProperty.propertyDimensions;
    PropertyRegistrationApp.methods
        .registerProperty(ownerName, ownerId, passCode, propertyType, propertyAddress, propertyDimensions)
        .send({
            from: ownerId,
            gas: 4712388,
            gasPrice: 100000000000,
        })
        .then(response => {
            return res.status(200).json({ success: response });
        })
        .catch(error => {
            error["Error"] = "Property Can't be registered";
            return res.status(500).json({ error: error });
        });
});

app.post("/sellProperty", (req, res) => {
    let sellProperty = req.body;
    let propertyId = sellProperty.propertyId;
    let price = sellProperty.price;
    let ownerId = sellProperty.ownerId;
    PropertyRegistrationApp.methods
        .setPropertyPrice(propertyId, price)
        .send({
            from: ownerId,
            gas: 4712388,
            gasPrice: 100000000000,
        })
        .then(response => {
            return res.status(200).json({ success: response });
        })
        .catch(error => {
            error["Error"] = "Property Can't be sold";
            return res.status(500).json({ error: error });
        });
});

app.post("/buyProperty", (req, res) => {
    let buyProperty = req.body;
    let propertyId = buyProperty.propertyId;
    let price = buyProperty.price;
    let newOwnerId = buyProperty.newOwnerId;
    let newOwnerName = buyProperty.newOwnerName;
    PropertyRegistrationApp.methods
        .transferProperty(propertyId, newOwnerName)
        .send({
            from: newOwnerId,
            value: price,
            gas: 4712388,
            gasPrice: 100000000000,
        })
        .then(response => {
            return res.status(200).json({ success: response });
        })
        .catch(error => {
            error["Error"] = "Property Can't be purchased";
            return res.status(500).json({ error: error });
        });
});

export default app;
