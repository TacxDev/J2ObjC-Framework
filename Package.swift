// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private let github = "https://github.com"
private let repo = "TacxDev/J2ObjC-Framework"
private let version = "24.3.29"

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
            checksum: "6137e085cd790c19a736632682c8aeea1b49413501eea6b567a19c938cf28b52"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "0e1d55c8511ae4b707dbc900b2ac2d2adec1822e7984668ce1ce320578219c47"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "33e7883fc008ed5a005b2515d44f25f466e97fb09e0b4bb14378b377779caa60"
        ),
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "d6e407cb49c7bd9975849436c5ae9b3188b273eb962a74369a0a8b3cb3c2682f"
        ),
        .binaryTarget(
            name: "JUnit",
            url: junitLink,
            checksum: "aa4aad2419a30370054caaaa9c810e3cfcfa3f8c5bf673212944a8bf638845d9"
        ),
        .binaryTarget(
            name: "Mockito",
            url: mockitoLink,
            checksum: "12c5c6af715df54ca2bfe20c3fac03d4440c9610dd6945f9a530e8c12de47564"
        )
    ]
)
