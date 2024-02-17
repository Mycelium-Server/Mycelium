
#include "item_predicate.h"

ItemPredicateParser::ItemPredicateParser() = default;
ItemPredicateParser::~ItemPredicateParser() = default;

int ItemPredicateParser::getID() const {
  return 15;
}

std::string ItemPredicateParser::getIdentifier() const {
  return "minecraft:item_predicate";
}

void ItemPredicateParser::writeProperties(ByteBuffer &) const {}