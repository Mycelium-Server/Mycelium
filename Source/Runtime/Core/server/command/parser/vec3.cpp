
#include "vec3.h"

Vec3Parser::Vec3Parser() = default;
Vec3Parser::~Vec3Parser() = default;

int Vec3Parser::getID() const {
  return 10;
}

std::string Vec3Parser::getIdentifier() const {
  return "minecraft:vec3";
}

void Vec3Parser::writeProperties(ByteBuffer &) const {}
