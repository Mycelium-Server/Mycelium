

#include "spawner_block.h"

SpawnerBlock::SpawnerBlock() = default;
SpawnerBlock::~SpawnerBlock() = default;

short SpawnerBlock::getId() const {
  return 2207;
}

std::shared_ptr<Block> SpawnerBlock::clone() const {
  std::shared_ptr<SpawnerBlock> copy = std::make_shared<SpawnerBlock>();
  return copy;
}
