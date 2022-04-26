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
            url: "https://github.com/galen-it/tensorflow-swift-package/releases/download/2.7.10/GalenitTensorFlow.xcframework.zip",
            checksum: "ba7f89245ac2719bebac0eb3901ea6006da7163a252992c0b1f39565945d1fe1"
        ),
    ]
)
