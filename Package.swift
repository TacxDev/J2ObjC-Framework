// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private let github = "https://github.com"
private let repo = "TacxDev/J2ObjC-Framework"
private let version = "2.8"

private let baseLink = "\(github)/\(repo)/releases/download/\(version)/"
private let jreLink = "\(baseLink)JRE.xcframework.zip"
private let jsrLink = "\(baseLink)JSR305.xcframework.zip"
private let protobufLink = "\(baseLink)ProtobufRuntime.xcframework.zip"
private let jsonLink = "\(baseLink)JSON.xcframework.zip"

let cxxSetting: [CXXSetting]? = nil // [.headerSearchPath("./JRE.xcframework/ios-x86_64-simulator/Headers")]
let lSetting: [LinkerSetting] = [
    .linkedFramework("Security"),
    .linkedLibrary("z"),
    .linkedLibrary("icucore"),
    .linkedLibrary("iconv"),
]

let package = Package(
    name: "J2ObjC_Framework",
    products: [
        .library(name: "JRE", targets: ["JREWrapper"]),
        .library(name: "JSR305", targets: ["JSR305Wrapper"]),
        .library(name: "ProtobufRuntime", targets: ["ProtobufRuntimeWrapper"]),
        .library(name: "JSON", targets: ["JSONWrapper"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "JREWrapper",
            dependencies: [.target(name: "JRE")],
            path: "./JRE",
            publicHeadersPath: nil,
            cxxSettings: cxxSetting,
            linkerSettings: lSetting
        ),
        .target(
            name: "JSR305Wrapper",
            dependencies: [
                .target(name: "JSR305"),
            ],
            path: "./JSR305",
            publicHeadersPath: nil,
            cxxSettings: cxxSetting,
            linkerSettings: lSetting
        ),
        .target(
            name: "ProtobufRuntimeWrapper",
            dependencies: [.target(name: "ProtobufRuntime"),],
            path: "./ProtobufRuntime",
            publicHeadersPath: nil,
            cxxSettings: cxxSetting,
            linkerSettings: lSetting
        ),
        .target(
            name: "JSONWrapper",
            dependencies: [.target(name: "JSON"),],
            path: "./JSON",
            publicHeadersPath: nil,
            cxxSettings: cxxSetting,
            linkerSettings: lSetting
        ),
        .binaryTarget(
            name: "JRE",
            url: jreLink,
            checksum: "a0ea7c044c6d55791ae321902c96dbc134b66b379d4f64b45d594c19c1560cb6"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "2496d6008c61fef28851f3853e04bcddb924a479ce10f696bbd0920fac50b888"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "1877a58f78ea5480a4cf850f544b3fc9c30ce255249b1af2e060b8d0536f3a91"
        ),
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "ab4f5ea978f5d2e96863808d7b704f34270b1cd5ffaebda76c8c48a60531ba9c"
        )
    ]
)
