

#include "red_tulip_block.h"

RedTulipBlock::RedTulipBlock() = default;
RedTulipBlock::~RedTulipBlock() = default;

short RedTulipBlock::getId() const {
  return 1671;
}

std::shared_ptr<Block> RedTulipBlock::clone() const {
  std::shared_ptr<RedTulipBlock> copy = std::make_shared<RedTulipBlock>();
  return copy;
}
