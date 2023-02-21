// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private let github = "https://github.com"
private let repo = "TacxDev/J2ObjC-Framework"
private let version = "2.5.6"

//private let file = "j2objc-\(version).zip"

private let baseLink = "\(github)/\(repo)/releases/download/\(version)/"
private let jreLink = "\(baseLink)JRE.xcframework.zip"
private let jsrLink = "\(baseLink)JSR305.xcframework.zip"
private let protobufLink = "\(baseLink)ProtobufRuntime.xcframework.zip"

let package = Package(
    name: "J2ObjC-Framework",
    products: [
        .library(
            name: "J2ObjC-Framework",
            targets: ["J2ObjC-Framework", "JRE", "JSR305", "ProtobufRuntime"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "J2ObjC-Framework",
            dependencies: ["JRE", "JSR305", "ProtobufRuntime"],
            linkerSettings: [
                .linkedFramework("Security"),
                .linkedLibrary("z"),
                .linkedLibrary("icucore"),
                .linkedLibrary("iconv"),
            ]
        ),
        .binaryTarget(
            name: "JRE",
            url: jreLink,
            checksum: "5564963bbd9393e3f89b2d407625d7f2c22252e21ab30cc34ad8170d62470393"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "672350e1c8398c7e8b732f762d27ee7d2e0bdf4893bece2ca2140d79df13d758"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "bcde9341fa9f30068d2e2cb0240e2bb515ff4b5a28369708b6272f4a3d94b435"
        ),
    ]
)
