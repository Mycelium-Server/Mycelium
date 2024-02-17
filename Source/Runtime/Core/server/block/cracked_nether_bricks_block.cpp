

#include "cracked_nether_bricks_block.h"

CrackedNetherBricksBlock::CrackedNetherBricksBlock() = default;
CrackedNetherBricksBlock::~CrackedNetherBricksBlock() = default;

short CrackedNetherBricksBlock::getId() const {
  return 18311;
}

std::shared_ptr<Block> CrackedNetherBricksBlock::clone() const {
  std::shared_ptr<CrackedNetherBricksBlock> copy = std::make_shared<CrackedNetherBricksBlock>();
  return copy;
}
