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
            targets: ["TensorFlowLite"]
        ),
    ],
    targets: [
        .target(
            name: "TensorFlowLite",
            dependencies: ["TensorFlowLiteC", "TensorFlowLiteCCoreML", "TensorFlowLiteCMetal"],
            path: "TensorFlowLiteSwift",
            linkerSettings: [
                .linkedFramework("Metal"),
                .linkedFramework("CoreML"),
                .linkedLibrary("c++")
            ]
        ),
        .binaryTarget(
            name: "TensorFlowLiteC",
            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/TensorFlowLiteC.xcframework.zip",
            checksum: "5f90d1c0b4788b715d9778011d9d513ac22a8bd3d74b7a1fa236ab33242288f7"
        ),
        .binaryTarget(
            name: "TensorFlowLiteCCoreML",
            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/TensorFlowLiteCCoreML.xcframework.zip",
            checksum: "931d0a7b03d2f862685ddb52ceaa9f79877d749470193d9520bda209b9e78a0b"
        ),
        .binaryTarget(
            name: "TensorFlowLiteCMetal",
            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/TensorFlowLiteCMetal.xcframework.zip",
            checksum: "7c7be5b84e99bd7a834d998294c7c950c2e838c3bf7cbfaea99a9415c396b86f"
        )
    ]
)
