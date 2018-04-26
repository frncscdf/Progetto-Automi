
// Generated from .\VisualStudioAntlrProject\VisualStudioAntlrProject\swl.g4 by ANTLR 4.7.1


#include "swlLexer.h"


using namespace antlr4;


swlLexer::swlLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

swlLexer::~swlLexer() {
  delete _interpreter;
}

std::string swlLexer::getGrammarFileName() const {
  return "swl.g4";
}

const std::vector<std::string>& swlLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& swlLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& swlLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& swlLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& swlLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> swlLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& swlLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> swlLexer::_decisionToDFA;
atn::PredictionContextCache swlLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN swlLexer::_atn;
std::vector<uint16_t> swlLexer::_serializedATN;

std::vector<std::string> swlLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"T__6", 
  u8"ID", u8"NUMBER", u8"WS", u8"ErrorChar"
};

std::vector<std::string> swlLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> swlLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> swlLexer::_literalNames = {
  "", u8"'begin'", u8"'end'", u8"'let'", u8"'be'", u8"'print'", u8"'add'", 
  u8"'to'"
};

std::vector<std::string> swlLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", u8"ID", u8"NUMBER", u8"WS", u8"ErrorChar"
};

dfa::Vocabulary swlLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> swlLexer::_tokenNames;

swlLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0xd, 0x4a, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 
    0x9, 0x39, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x3a, 0x3, 0xa, 0x6, 0xa, 0x3e, 
    0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x3f, 0x3, 0xb, 0x6, 0xb, 0x43, 0xa, 0xb, 
    0xd, 0xb, 0xe, 0xb, 0x44, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x2, 
    0x2, 0xd, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
    0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x3, 0x2, 0x5, 
    0x3, 0x2, 0x63, 0x7c, 0x3, 0x2, 0x32, 0x3b, 0x4, 0x2, 0xb, 0xc, 0x22, 
    0x22, 0x2, 0x4c, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x3, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x7, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0xd, 0x30, 0x3, 0x2, 0x2, 0x2, 0xf, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x38, 0x3, 0x2, 0x2, 0x2, 0x13, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x17, 0x48, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 
    0x7, 0x64, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x67, 0x2, 0x2, 0x1b, 0x1c, 0x7, 
    0x69, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x6b, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x70, 
    0x2, 0x2, 0x1e, 0x4, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x67, 0x2, 
    0x2, 0x20, 0x21, 0x7, 0x70, 0x2, 0x2, 0x21, 0x22, 0x7, 0x66, 0x2, 0x2, 
    0x22, 0x6, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x6e, 0x2, 0x2, 0x24, 
    0x25, 0x7, 0x67, 0x2, 0x2, 0x25, 0x26, 0x7, 0x76, 0x2, 0x2, 0x26, 0x8, 
    0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 0x64, 0x2, 0x2, 0x28, 0x29, 0x7, 
    0x67, 0x2, 0x2, 0x29, 0xa, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x72, 
    0x2, 0x2, 0x2b, 0x2c, 0x7, 0x74, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x6b, 0x2, 
    0x2, 0x2d, 0x2e, 0x7, 0x70, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x76, 0x2, 0x2, 
    0x2f, 0xc, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x63, 0x2, 0x2, 0x31, 
    0x32, 0x7, 0x66, 0x2, 0x2, 0x32, 0x33, 0x7, 0x66, 0x2, 0x2, 0x33, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x76, 0x2, 0x2, 0x35, 0x36, 0x7, 
    0x71, 0x2, 0x2, 0x36, 0x10, 0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x9, 0x2, 
    0x2, 0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x12, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x9, 0x3, 0x2, 0x2, 0x3d, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x43, 0x9, 0x4, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x47, 0x8, 0xb, 0x2, 0x2, 0x47, 0x16, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x49, 0xb, 0x2, 0x2, 0x2, 0x49, 0x18, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2, 
    0x3a, 0x3f, 0x44, 0x3, 0x8, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

swlLexer::Initializer swlLexer::_init;
