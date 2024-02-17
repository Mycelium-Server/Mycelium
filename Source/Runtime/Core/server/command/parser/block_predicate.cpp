
#include "block_predicate.h"

BlockPredicateParser::BlockPredicateParser() = default;
BlockPredicateParser::~BlockPredicateParser() = default;

int BlockPredicateParser::getID() const {
  return 13;
}
std::string BlockPredicateParser::getIdentifier() const {
  return "minecraft:block_predicate";
}

void BlockPredicateParser::writeProperties(ByteBuffer &) const {}
