// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private let github = "https://github.com"
private let repo = "TacxDev/J2ObjC-Framework"
private let version = "24.2.8"

private let baseLink = "\(github)/\(repo)/releases/download/\(version)/"
private let jreLink = "\(baseLink)JRE.xcframework.zip"
private let jsrLink = "\(baseLink)JSR305.xcframework.zip"
private let protobufLink = "\(baseLink)ProtobufRuntime.xcframework.zip"
private let jsonLink = "\(baseLink)JSON.xcframework.zip"
private let junitLink = "\(baseLink)JUnit.xcframework.zip"
private let mockitoLink = "\(baseLink)Mockito.xcframework.zip"

let cxxSetting: [CXXSetting]? = nil
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
        .library(name: "JUnit", targets: ["JUnitWrapper"]),
        .library(name: "Mockito", targets: ["MockitoWrapper"]),
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
        .target(
            name: "JUnitWrapper",
            dependencies: [.target(name: "JUnit"),],
            path: "./JUnit",
            publicHeadersPath: nil,
            cxxSettings: cxxSetting,
            linkerSettings: lSetting
        ),
        .target(
            name: "MockitoWrapper",
            dependencies: [.target(name: "Mockito"),],
            path: "./Mockito",
            publicHeadersPath: nil,
            cxxSettings: cxxSetting,
            linkerSettings: lSetting
        ),
        .binaryTarget(
            name: "JRE",
            url: jreLink,
            checksum: "f3fa88b4d4e584be088d296c6035c79b48fe520ecc9684cf873afccb417fec88"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "1580a81b92db823125f4078a6eade5cb201f05154a0027bd015ab5598c4637fc"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "33e7883fc008ed5a005b2515d44f25f466e97fb09e0b4bb14378b377779caa60"
        ),
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "85978a335cab74c3845796ebfde1b802283c9c21010c2913a98907eb86830aa6"
        ),
        .binaryTarget(
            name: "JUnit",
            url: junitLink,
            checksum: "49dfb7d5bc04a4d63a1f9d19aec02fb865234fd89e75b0db2700507b642cd75e"
        ),
        .binaryTarget(
            name: "Mockito",
            url: mockitoLink,
            checksum: "d1a8bd4af5edadf72f1cf07bfbb9fccfeb22a3e3cd43c45a7f7c5ecb1646c765"
        )
    ]
)
