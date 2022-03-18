// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GalenitTensorFlow",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "GalenitTensorFlow",
            targets: ["TensorFlowLite", "TensorFlowLiteC"]
        ),
    ],
    targets: [
        .target(
            name: "TensorFlowLite",
            dependencies: ["TensorFlowLiteC"],
            path: "TensorFlowLiteSwift"
        ),
//        .target(
//            name: "TensorFlowLiteCCombined",
//            dependencies: ["TensorFlowLiteC", "TensorFlowLiteCCoreML", "TensorFlowLiteCMetal"],
//            path: "TensorFlowLiteCCombined"
//        ),
        .binaryTarget(
            name: "TensorFlowLiteC",
            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/TensorFlowLiteC.xcframework.zip",
            checksum: "03c288e872d2bc82a92a99df069e23e6ed6cd43ec7e4dca3fd9624c0bfe49ac3"
        ),
//        .binaryTarget(
//            name: "TensorFlowLiteCCoreML",
//            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/TensorFlowLiteCCoreML.xcframework.zip",
//            checksum: "fc77e98c31e58dab0b1b487b06690839ad5b027ff9ba0260f1d87dd240c0aa9e"
//        ),
//        .binaryTarget(
//            name: "TensorFlowLiteCMetal",
//            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/TensorFlowLiteCMetal.xcframework.zip",
//            checksum: "e21f3e50d3ce6e06fe3d554bd7f997bb0fed057b29990512a1adedc8d2429ef7"
//        )
    ]
)
