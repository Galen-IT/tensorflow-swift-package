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
            checksum: "110ab8194f8c4d8fd72592d200f4ada5d8c7a9ef75edfea09bcad6ec5d435af5"
        ),
    ]
)
