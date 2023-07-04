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
        .binaryTarget(
            name: "JSON",
            url: jsonLink,
            checksum: "9735a2779c0bab909e5530af89fff9e2ec05f6c751a144046d696b1d9bb4bb6c"
        ),
        .binaryTarget(
            name: "JUnit",
            url: junitLink,
            checksum: "9040b06ab2b369fbf78cb2e5ca125c2bfd353802bfeb98e3079f504448c1ed44"
        ),
        .binaryTarget(
            name: "Mockito",
            url: mockitoLink,
            checksum: "744d4919983eb7c2fadf7cec462fee7d923f04729f8789bd491ddcc13b61c8ab"
        )
    ]
)
