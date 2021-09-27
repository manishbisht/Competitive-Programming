const path = require("path");
const HtmlWebpackPlugin = require("html-webpack-plugin");

module.exports = {
    entry: ["babel-polyfill", path.join(__dirname, "src/dapp")],
    output: {
        path: path.join(__dirname, "prod/dapp"),
        filename: "bundle.js",
    },
    module: {
        rules: [
            {
                test: /\.(js|jsx)$/,
                exclude: /node_modules/,
                use: {
                    loader: "babel-loader",
                    options: {
                        presets: ["@babel/preset-env", "@babel/preset-react"],
                    },
                },
            },
            {
                test: /\.css$/,
                use: ["style-loader", "css-loader"],
            },
            {
                test: /\.(png|svg|jpg|gif)$/,
                use: ["file-loader"],
            },
            {
                test: /\.html$/,
                use: "html-loader",
                exclude: /node_modules/,
            },
        ],
    },
    plugins: [
        new HtmlWebpackPlugin({
            template: path.join(__dirname, "src/dapp/index.html"),
        }),
    ],
    resolve: {
        extensions: [".js"],
    },
    devServer: {
        contentBase: path.join(__dirname, "dapp"),
        port: 8000,
        stats: "minimal",
    },
};
