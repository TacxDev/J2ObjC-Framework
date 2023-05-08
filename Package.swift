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
//        .library(name: "JSON", targets: ["JSONWrapper"]),
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
//        .target(
//            name: "JSONWrapper",
//            dependencies: [.target(name: "JSON"),],
//            path: "./JSON",
//            publicHeadersPath: nil,
//            cxxSettings: cxxSetting,
//            linkerSettings: lSetting
//        ),
        .binaryTarget(
            name: "JRE",
            url: jreLink,
            checksum: "95d77aadc44addfdf7460628ae4ca30b258e985a164448778e2aac885eb40bef"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "acaf9ad995bc38d19ed467041f0d361365ea116e5718a6897f8922f3d0f2f164"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "8d3bd40a70efdf9bc47e245726af29467e780d3591fb16eafdf64ea1e297aa34"
        ),
//        .binaryTarget(
//            name: "JSON",
//            url: jsonLink,
//            checksum: "0ec6b51a0898f1b7592e978256d41acc987a6a88e7ca8e7b07be732aad0f10a5"
//        )
    ]
)
