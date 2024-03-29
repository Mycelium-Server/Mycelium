

#include "potted_lily_of_the_valley_block.h"

PottedLilyOfTheValleyBlock::PottedLilyOfTheValleyBlock() = default;
PottedLilyOfTheValleyBlock::~PottedLilyOfTheValleyBlock() = default;

short PottedLilyOfTheValleyBlock::getId() const {
  return 6917;
}

std::shared_ptr<Block> PottedLilyOfTheValleyBlock::clone() const {
  std::shared_ptr<PottedLilyOfTheValleyBlock> copy = std::make_shared<PottedLilyOfTheValleyBlock>();
  return copy;
}
