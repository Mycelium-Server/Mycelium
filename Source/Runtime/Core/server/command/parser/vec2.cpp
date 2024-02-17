
#include "vec2.h"

Vec2Parser::Vec2Parser() = default;
Vec2Parser::~Vec2Parser() = default;

int Vec2Parser::getID() const {
  return 11;
}

std::string Vec2Parser::getIdentifier() const {
  return "minecraft:vec2";
}

void Vec2Parser::writeProperties(ByteBuffer &) const {}
