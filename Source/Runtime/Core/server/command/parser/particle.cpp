
#include "particle.h"

ParticleParser::ParticleParser() = default;
ParticleParser::~ParticleParser() = default;

int ParticleParser::getID() const {
  return 25;
}

std::string ParticleParser::getIdentifier() const {
  return "minecraft:particle";
}

void ParticleParser::writeProperties(ByteBuffer &) const {}