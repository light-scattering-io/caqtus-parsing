// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCaqtus",
    products: [
        .library(name: "TreeSitterCaqtus", targets: ["TreeSitterCaqtus"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterCaqtus",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterCaqtusTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterCaqtus",
            ],
            path: "bindings/swift/TreeSitterCaqtusTests"
        )
    ],
    cLanguageStandard: .c11
)
