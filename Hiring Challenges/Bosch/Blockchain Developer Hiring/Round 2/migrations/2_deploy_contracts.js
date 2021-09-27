const PropertyRegistration = artifacts.require("PropertyRegistration");
const fs = require("fs");

module.exports = function (deployer) {
    deployer.deploy(PropertyRegistration).then(() => {
        let config = {
            localhost: {
                url: "http://localhost:7545",
                serverURL: "http://localhost:3000",
                appAddress: PropertyRegistration.address,
            },
        };
        fs.writeFileSync(__dirname + "/../src/dapp/config.json", JSON.stringify(config, null, "\t"), "utf-8");
        fs.writeFileSync(__dirname + "/../src/server/config.json", JSON.stringify(config, null, "\t"), "utf-8");
    });
};
