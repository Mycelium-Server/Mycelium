
#include "score_holder.h"

ScoreHolderParser::ScoreHolderParser() = default;
ScoreHolderParser::~ScoreHolderParser() = default;

int ScoreHolderParser::getID() const {
  return 29;
}

std::string ScoreHolderParser::getIdentifier() const {
  return "minecraft:score_holder";
}

void ScoreHolderParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte((uint8_t) allowMultiple);
}