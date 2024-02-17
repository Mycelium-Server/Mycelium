

#include "jigsaw_block.h"

JigsawBlock::JigsawBlock() = default;
JigsawBlock::~JigsawBlock() = default;

short JigsawBlock::getId() const {
  return 16948 + orientation * 1;
}

std::shared_ptr<Block> JigsawBlock::clone() const {
  std::shared_ptr<JigsawBlock> copy = std::make_shared<JigsawBlock>();
  copy->orientation = orientation;
  return copy;
}
