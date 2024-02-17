
#include "brigadier_bool.h"

BrigadierBoolParser::BrigadierBoolParser() = default;
BrigadierBoolParser::~BrigadierBoolParser() = default;

int BrigadierBoolParser::getID() const {
  return 0;
}

std::string BrigadierBoolParser::getIdentifier() const {
  return "brigadier:bool";
}

void BrigadierBoolParser::writeProperties(ByteBuffer &) const {}
