

#include "shroomlight_block.h"

ShroomlightBlock::ShroomlightBlock() = default;
ShroomlightBlock::~ShroomlightBlock() = default;

short ShroomlightBlock::getId() const {
  return 16198;
}

std::shared_ptr<Block> ShroomlightBlock::clone() const {
  std::shared_ptr<ShroomlightBlock> copy = std::make_shared<ShroomlightBlock>();
  return copy;
}
