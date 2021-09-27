import React, { Component } from "react";
import { Input, Select, Button, Divider, Typography, Alert } from "antd";
import Config from "../config.json";
let config = Config["localhost"];
import "antd/dist/antd.css";

const { Text } = Typography;
const Option = Select.Option;

export default class App extends Component {
    constructor(props) {
        super(props);

        this.state = {
            registeredProperties: [],
            newProperty: {},
            sellProperty: {},
            buyProperty: {},
        };
    }

    componentDidMount() {
        this.updateRegisteredProperties();
    }

    updateRegisteredProperties() {
        fetch(config.serverURL + "/registeredProperties", {
            method: "GET",
        }).then(response => {
            response.json().then(data => {
                if (response.status === 200) {
                    this.setState({
                        registeredProperties: data.success,
                        sellProperty: {
                            propertyId: data.success[0] || "",
                        },
                        buyProperty: {
                            propertyId: data.success[0] || "",
                        },
                    });
                } else {
                    alert(data.error);
                }
            });
        });
    }

    renderRegisteredPropertySection() {
        return (
            <div>
                <Divider>Registered Properties</Divider>
                <center>
                    <div style={{ maxWidth: 500 }}>
                        {this.state.registeredProperties.length === 0 ? (
                            <Alert message="No properties are registered" type="error" />
                        ) : (
                            this.state.registeredProperties.map(propertyId => {
                                return (
                                    <div>
                                        <Text>{propertyId}</Text>
                                    </div>
                                );
                            })
                        )}
                    </div>
                </center>
            </div>
        );
    }

    handleValueChange(e, type, data, key) {
        let value = e.target.value;
        switch (type) {
            case "NEW_PROPERTY":
                data[key] = value;
                this.setState({
                    newProperty: data,
                });
                break;
            case "SELL_PROPERTY":
                data[key] = value;
                this.setState({
                    sellProperty: data,
                });
                break;
            case "BUY_PROPERTY":
                data[key] = value;
                this.setState({
                    buyProperty: data,
                });
                break;
        }
    }

    registerProperty() {
        fetch(config.serverURL + "/registerProperty", {
            method: "POST",
            headers: {
                Accept: "application/json",
                "Content-Type": "application/json",
            },
            body: JSON.stringify(this.state.newProperty),
        }).then(response => {
            response.json().then(data => {
                if (response.status === 200) {
                    alert(
                        "PropertyId: " +
                            data.success.events.PropertyRegistered.returnValues[2] +
                            " registered successfully"
                    );
                } else {
                    alert(JSON.stringify(data.error));
                }
                this.updateRegisteredProperties();
            });
        });
    }

    handleDropdownValueChange(value, type, data, key) {
        switch (type) {
            case "SELL_PROPERTY":
                data[key] = value;
                this.setState({
                    sellProperty: data,
                });
                break;
            case "BUY_PROPERTY":
                data[key] = value;
                this.setState({
                    buyProperty: data,
                });
                break;
        }
    }

    renderNewPropertyRegistrationSection() {
        return (
            <div>
                <Divider>Register New Property</Divider>
                <center>
                    <div style={{ maxWidth: 500 }}>
                        <div style={{ paddingBottom: 10 }}>
                            <Input
                                placeholder="Owner Name - String"
                                value={this.state.newProperty.ownerName}
                                onChange={e =>
                                    this.handleValueChange(e, "NEW_PROPERTY", this.state.newProperty, "ownerName")
                                }
                            />
                        </div>
                        <div style={{ paddingBottom: 10 }}>
                            <Input
                                placeholder="Owner ID - address"
                                value={this.state.newProperty.ownerId}
                                onChange={e =>
                                    this.handleValueChange(e, "NEW_PROPERTY", this.state.newProperty, "ownerId")
                                }
                            />
                        </div>
                        <div style={{ paddingBottom: 10 }}>
                            <Input
                                placeholder="Pass Code - Integer"
                                value={this.state.newProperty.passCode}
                                onChange={e =>
                                    this.handleValueChange(e, "NEW_PROPERTY", this.state.newProperty, "passCode")
                                }
                            />
                        </div>
                        <div style={{ paddingBottom: 10 }}>
                            <Input
                                placeholder="Property Type - 0 for Land or 1 for Built-Up"
                                value={this.state.newProperty.propertyType}
                                onChange={e =>
                                    this.handleValueChange(e, "NEW_PROPERTY", this.state.newProperty, "propertyType")
                                }
                            />
                        </div>
                        <div style={{ paddingBottom: 10 }}>
                            <Input
                                placeholder="Property Address - string"
                                value={this.state.newProperty.propertyAddress}
                                onChange={e =>
                                    this.handleValueChange(e, "NEW_PROPERTY", this.state.newProperty, "propertyAddress")
                                }
                            />
                        </div>
                        <div style={{ paddingBottom: 10 }}>
                            <Input
                                placeholder="Property Dimensions - string"
                                value={this.state.newProperty.propertyDimensions}
                                onChange={e =>
                                    this.handleValueChange(
                                        e,
                                        "NEW_PROPERTY",
                                        this.state.newProperty,
                                        "propertyDimensions"
                                    )
                                }
                            />
                        </div>
                        <div style={{ paddingBottom: 10 }}>
                            <Button type="primary" block onClick={() => this.registerProperty()}>
                                Register Property
                            </Button>
                        </div>
                    </div>
                </center>
            </div>
        );
    }

    sellProperty() {
        fetch(config.serverURL + "/sellProperty", {
            method: "POST",
            headers: {
                Accept: "application/json",
                "Content-Type": "application/json",
            },
            body: JSON.stringify(this.state.sellProperty),
        }).then(response => {
            response.json().then(data => {
                if (response.status === 200) {
                    alert("PropertyId: " + data.success.events.PropertyOnSale.returnValues[0] + " marked as on sale");
                } else {
                    alert(JSON.stringify(data.error));
                }
            });
        });
    }

    renderSellPropertySection() {
        return (
            <div>
                <Divider>Sell Property</Divider>
                <center>
                    <div style={{ maxWidth: 500 }}>
                        {this.state.registeredProperties.length === 0 ? (
                            <Alert message="No properties are registered" type="error" />
                        ) : (
                            <div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Select
                                        value={this.state.sellProperty.propertyId}
                                        style={{ width: "100%" }}
                                        onChange={value =>
                                            this.handleDropdownValueChange(
                                                value,
                                                "SELL_PROPERTY",
                                                this.state.sellProperty,
                                                "propertyId"
                                            )
                                        }
                                    >
                                        {this.state.registeredProperties.map(propertyId => {
                                            return <Option value={propertyId}>{propertyId}</Option>;
                                        })}
                                    </Select>
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Input
                                        placeholder="Property Price - Integer"
                                        value={this.state.sellProperty.price}
                                        onChange={e =>
                                            this.handleValueChange(e, "SELL_PROPERTY", this.state.sellProperty, "price")
                                        }
                                    />
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Input
                                        placeholder="Owner ID - address"
                                        value={this.state.sellProperty.ownerId}
                                        onChange={e =>
                                            this.handleValueChange(
                                                e,
                                                "SELL_PROPERTY",
                                                this.state.sellProperty,
                                                "ownerId"
                                            )
                                        }
                                    />
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Button type="primary" block onClick={() => this.sellProperty()}>
                                        Sell Property
                                    </Button>
                                </div>
                            </div>
                        )}
                    </div>
                </center>
            </div>
        );
    }

    buyProperty() {
        fetch(config.serverURL + "/buyProperty", {
            method: "POST",
            headers: {
                Accept: "application/json",
                "Content-Type": "application/json",
            },
            body: JSON.stringify(this.state.buyProperty),
        }).then(response => {
            response.json().then(data => {
                if (response.status === 200) {
                    alert("PropertyId: " + data.success.events.PropertyTransferred.returnValues[3] + " purchased");
                } else {
                    alert(JSON.stringify(data.error));
                }
            });
        });
    }

    renderBuyPropertySection() {
        return (
            <div>
                <Divider>Buy Property</Divider>
                <center>
                    <div style={{ maxWidth: 500 }}>
                        {this.state.registeredProperties.length === 0 ? (
                            <Alert message="No properties are on sale" type="error" />
                        ) : (
                            <div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Select
                                        value={this.state.buyProperty.propertyId}
                                        style={{ width: "100%" }}
                                        onChange={value =>
                                            this.handleDropdownValueChange(
                                                value,
                                                "BUY_PROPERTY",
                                                this.state.buyProperty,
                                                "propertyId"
                                            )
                                        }
                                    >
                                        {this.state.registeredProperties.map(propertyId => {
                                            return <Option value={propertyId}>{propertyId}</Option>;
                                        })}
                                    </Select>
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Input
                                        placeholder="Property Buy Price - Integer"
                                        value={this.state.buyProperty.price}
                                        onChange={e =>
                                            this.handleValueChange(e, "BUY_PROPERTY", this.state.buyProperty, "price")
                                        }
                                    />
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Input
                                        placeholder="New Owner ID - address"
                                        value={this.state.buyProperty.newOwnerId}
                                        onChange={e =>
                                            this.handleValueChange(
                                                e,
                                                "BUY_PROPERTY",
                                                this.state.buyProperty,
                                                "newOwnerId"
                                            )
                                        }
                                    />
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Input
                                        placeholder="New Owner Name - string"
                                        value={this.state.buyProperty.newOwnerName}
                                        onChange={e =>
                                            this.handleValueChange(
                                                e,
                                                "BUY_PROPERTY",
                                                this.state.buyProperty,
                                                "newOwnerName"
                                            )
                                        }
                                    />
                                </div>
                                <div style={{ paddingBottom: 10 }}>
                                    <Button type="primary" block onClick={() => this.buyProperty()}>
                                        Buy Property
                                    </Button>
                                </div>
                            </div>
                        )}
                    </div>
                </center>
            </div>
        );
    }

    render() {
        return (
            <div>
                {this.renderRegisteredPropertySection()}
                {this.renderNewPropertyRegistrationSection()}
                {this.renderSellPropertySection()}
                {this.renderBuyPropertySection()}
            </div>
        );
    }
}
