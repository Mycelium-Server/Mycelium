

#include "sculk_shrieker_block.h"

SculkShriekerBlock::SculkShriekerBlock() = default;
SculkShriekerBlock::~SculkShriekerBlock() = default;

short SculkShriekerBlock::getId() const {
  return 18900 + waterlogged * 1 + shrieking * 2 + can_summon * 4;
}

std::shared_ptr<Block> SculkShriekerBlock::clone() const {
  std::shared_ptr<SculkShriekerBlock> copy = std::make_shared<SculkShriekerBlock>();
  copy->can_summon = can_summon;
  copy->shrieking = shrieking;
  copy->waterlogged = waterlogged;
  return copy;
}
