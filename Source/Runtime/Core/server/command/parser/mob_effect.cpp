
#include "mob_effect.h"

MobEffectParser::MobEffectParser() = default;
MobEffectParser::~MobEffectParser() = default;

int MobEffectParser::getID() const {
  return 34;
}

std::string MobEffectParser::getIdentifier() const {
  return "minecraft:mob_effect";
}

void MobEffectParser::writeProperties(ByteBuffer &) const {}
