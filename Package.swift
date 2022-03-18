// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "GalenitBinah",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "GalenitBinah",
            targets: ["GalenitBinah"]),
    ],
    targets: [
        .target(
            name: "GalenitBinah",
            dependencies: ["BinahAI"],
            path: "Sources"
        ),
       .binaryTarget(
            name: "BinahAI",
            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/BinahAI.xcframework.zip",
            checksum: "5c4f13911f8376df9b99e45a8dec622597b2be6d6201e4f4121c6b8c0f2d2105"
        )
    ]
)
