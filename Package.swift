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
            name: "GalenitTensorFlow",
            targets: ["TensorFlowLite"]
        ),
    ],
    dependencies: [
        .package(url: "", from: "")
    ],
    targets: [
        .target(
            name: "TensorFlowLite",
            dependencies: [
                .product(name: "", package: "")
            ],
            linkerSettings: [
                .linkedLibrary("c++"),
            ]
        ),
        .binaryTarget(
            name: "TensorFlowLiteC",
            url: "https://github.com/galen-it/tensorflow-ios-package/releases/download/2.7.0/TensorFlowLiteC.xcframework.zip",
            checksum: "5f90d1c0b4788b715d9778011d9d513ac22a8bd3d74b7a1fa236ab33242288f7"
        ),
    ]
)
