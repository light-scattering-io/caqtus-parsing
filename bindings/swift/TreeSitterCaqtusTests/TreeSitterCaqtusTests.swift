import XCTest
import SwiftTreeSitter
import TreeSitterCaqtus

final class TreeSitterCaqtusTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_caqtus())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Caqtus grammar")
    }
}
