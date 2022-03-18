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
            targets: ["BinahAI"]),
    ],
    targets: [
       .binaryTarget(
            name: "BinahAI",
            url: "https://github.com/Galen-IT/FlowVit_PublicSDKs_iOS/releases/download/v1.0.0/BinahAI.xcframework.zip",
            checksum: "adb9ed84c3b7c2284db48bfabad84f10ab3d71ba176ec920c5900eeb45076ad7"
        )
    ]
)
