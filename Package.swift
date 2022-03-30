// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "galenit-tensorflow-swift",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "GalenitTensorFlowSwift",
            targets: ["GalenitTensorFlow"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "GalenitTensorFlow",
            url: "https://github.com/galen-it/tensorflow-swift-package/releases/download/2.7.0/GalenitTensorFlow.xcframework.zip",
            checksum: "1a9420f9fa40a65b0bf203c5a72011b733d085e70b06bd539f1a12b7f96e6dce"
        ),
    ]
)
