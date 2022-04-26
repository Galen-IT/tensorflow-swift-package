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
            url: "https://github.com/galen-it/tensorflow-swift-package/releases/download/2.7.1001/GalenitTensorFlow.xcframework.zip",
            checksum: "ae0ba8ea44ca086b44776e4f4e9789ad5870f67139ccc63766a889ce17872e59"
        ),
    ]
)
