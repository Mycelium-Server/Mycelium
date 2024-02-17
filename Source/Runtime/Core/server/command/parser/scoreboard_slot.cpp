
#include "scoreboard_slot.h"

ScoreboardSlotParser::ScoreboardSlotParser() = default;
ScoreboardSlotParser::~ScoreboardSlotParser() = default;

int ScoreboardSlotParser::getID() const {
  return 28;
}

std::string ScoreboardSlotParser::getIdentifier() const {
  return "minecraft:scoreboard_slot";
}

void ScoreboardSlotParser::writeProperties(ByteBuffer &) const {}