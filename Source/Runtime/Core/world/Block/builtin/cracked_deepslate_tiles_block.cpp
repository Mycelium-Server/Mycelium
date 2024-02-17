

#include "cracked_deepslate_tiles_block.h"

CrackedDeepslateTilesBlock::CrackedDeepslateTilesBlock() = default;
CrackedDeepslateTilesBlock::~CrackedDeepslateTilesBlock() = default;

short CrackedDeepslateTilesBlock::getId() const {
  return 21427;
}

std::shared_ptr<Block> CrackedDeepslateTilesBlock::clone() const {
  std::shared_ptr<CrackedDeepslateTilesBlock> copy = std::make_shared<CrackedDeepslateTilesBlock>();
  return copy;
}
