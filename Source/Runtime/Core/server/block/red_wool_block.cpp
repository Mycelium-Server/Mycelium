

#include "red_wool_block.h"

RedWoolBlock::RedWoolBlock() = default;
RedWoolBlock::~RedWoolBlock() = default;

short RedWoolBlock::getId() const {
  return 1652;
}

std::shared_ptr<Block> RedWoolBlock::clone() const {
  std::shared_ptr<RedWoolBlock> copy = std::make_shared<RedWoolBlock>();
  return copy;
}
