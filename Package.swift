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
            checksum: "47e91589ad599b2fea6913e0e6ccd1fae9807893a8fc8f742a44fc5899d75a8f"
        ),
        .binaryTarget(
            name: "JSR305",
            url: jsrLink,
            checksum: "725caffc7fe59113c5ab3d4f9615d084b1d51a0545eb39c53cfdb43481481047"
        ),
        .binaryTarget(
            name: "ProtobufRuntime",
            url: protobufLink,
            checksum: "236101d602654c518da094f9d58787ee1f57f0673e7a1b85e1c62af862e76329"
        ),
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "a254b6ef1b6351bd540b82c30c14e4f6938fdb1168d2b41f192b594375fe71d1"
        ),
        .binaryTarget(
            name: "JUnit",
            url: junitLink,
            checksum: "746f44324baa0bff98dc6dc953ef5194a55a3591c47487668451279464e566ad"
        ),
        .binaryTarget(
            name: "Mockito",
            url: mockitoLink,
            checksum: "f9beea76e8725d62b086b5fd95dc491ad7cf206b150e007239bad485a3cc6c68"
        )
    ]
)
