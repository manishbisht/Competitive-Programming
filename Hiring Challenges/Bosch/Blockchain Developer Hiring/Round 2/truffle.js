var HDWalletProvider = require("truffle-hdwallet-provider");
var mnemonic = "candy maple cake sugar pudding cream honey rich smooth crumble sweet treat";

module.exports = {
    networks: {
        development: {
            provider: function () {
                return new HDWalletProvider(mnemonic, "http://127.0.0.1:7545/", 0, 50);
            },
            network_id: "*",
        },
    },
    compilers: {
        solc: {
            version: "^0.5.2",
        },
    },
};
