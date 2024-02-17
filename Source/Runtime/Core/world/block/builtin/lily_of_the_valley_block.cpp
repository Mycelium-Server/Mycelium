

#include "lily_of_the_valley_block.h"

LilyOfTheValleyBlock::LilyOfTheValleyBlock() = default;
LilyOfTheValleyBlock::~LilyOfTheValleyBlock() = default;

short LilyOfTheValleyBlock::getId() const {
  return 1678;
}

std::shared_ptr<Block> LilyOfTheValleyBlock::clone() const {
  std::shared_ptr<LilyOfTheValleyBlock> copy = std::make_shared<LilyOfTheValleyBlock>();
  return copy;
}
