// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private let github = "https://github.com"
private let repo = "TacxDev/J2ObjC-Framework"
private let version = "2.8.4"

private let baseLink = "\(github)/\(repo)/releases/download/\(version)/"
private let jreLink = "\(baseLink)JRE.xcframework.zip"
private let jsrLink = "\(baseLink)JSR305.xcframework.zip"
private let protobufLink = "\(baseLink)ProtobufRuntime.xcframework.zip"
private let jsonLink = "\(baseLink)JSON.xcframework.zip"
private let junitLink = "\(baseLink)JUnit.xcframework.zip"
private let mockitoLink = "\(baseLink)Mockito.xcframework.zip"

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
            checksum: "203442d421f94b4138894b9ecedfd6f2ca4d39359c76036605756f90c8dd9563"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "293f7cb2d788fbaa1c29361b50fd54c74c1821f5e3fcb4fac9c421bf4b29da1d"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "33e7883fc008ed5a005b2515d44f25f466e97fb09e0b4bb14378b377779caa60"
        ),
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "5e25c6ba7e5e140d5213c135f42ea3221813f924de1810ca5d57d1202bc241c3"
        ),
        .binaryTarget(
            name: "JUnit",
            url: junitLink,
            checksum: "fbfc87a38b9f2abc9f1d6910e7dff1f8e8156b19f14160a77d7a91f6411d3a87"
        ),
        .binaryTarget(
            name: "Mockito",
            url: mockitoLink,
            checksum: "53c4678059c36644b61ad4b298a37637044130b4a643c3072d7cecdd3fa637c5"
        )
    ]
)
