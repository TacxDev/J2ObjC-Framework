// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private let github = "https://github.com"
private let repo = "TacxDev/J2ObjC-Framework"
private let version = "200623"

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
            checksum: "7667d32a938c0187edc17fbeb167f33db783e93565d38f79e1e034da044ba0ed"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "ac104bb8321242439b60162f74d53a324033123ce04dd708c271b0c2604289b4"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "ba7d128c14094aaae8ee2280d68ee6d22fc1b6119a7c59e8a9f4354d768a7cc3"
        ),
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "bb17bcdc862756f0111d86cf84e9dfef7e459ebdcceb229fd44aeebafee379fe"
        )
    ]
)
