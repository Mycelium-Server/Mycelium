
#include "time.h"

TimeParser::TimeParser() = default;
TimeParser::~TimeParser() = default;

int TimeParser::getID() const {
  return 42;
}

std::string TimeParser::getIdentifier() const {
  return "minecraft:time";
}

void TimeParser::writeProperties(ByteBuffer &) const {}