

#include "cracked_deepslate_bricks_block.h"

CrackedDeepslateBricksBlock::CrackedDeepslateBricksBlock() = default;
CrackedDeepslateBricksBlock::~CrackedDeepslateBricksBlock() = default;

short CrackedDeepslateBricksBlock::getId() const {
  return 21426;
}

std::shared_ptr<Block> CrackedDeepslateBricksBlock::clone() const {
  std::shared_ptr<CrackedDeepslateBricksBlock> copy = std::make_shared<CrackedDeepslateBricksBlock>();
  return copy;
}
