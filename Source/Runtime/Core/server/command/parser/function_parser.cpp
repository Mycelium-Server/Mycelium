
#include "function_parser.h"

FunctionParser::FunctionParser() = default;
FunctionParser::~FunctionParser() = default;

int FunctionParser::getID() const {
  return 35;
}

std::string FunctionParser::getIdentifier() const {
  return "minecraft:function";
}

void FunctionParser::writeProperties(ByteBuffer &) const {}
