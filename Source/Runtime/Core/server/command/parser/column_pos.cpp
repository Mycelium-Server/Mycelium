
#include "column_pos.h"

ColumnPosParser::ColumnPosParser() = default;
ColumnPosParser::~ColumnPosParser() = default;

int ColumnPosParser::getID() const {
  return 9;
}

std::string ColumnPosParser::getIdentifier() const {
  return "minecraft:column_pos";
}

void ColumnPosParser::writeProperties(ByteBuffer &) const {}