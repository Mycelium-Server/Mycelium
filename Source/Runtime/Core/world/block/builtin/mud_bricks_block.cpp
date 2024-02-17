

#include "mud_bricks_block.h"

MudBricksBlock::MudBricksBlock() = default;
MudBricksBlock::~MudBricksBlock() = default;

short MudBricksBlock::getId() const {
  return 4873;
}

std::shared_ptr<Block> MudBricksBlock::clone() const {
  std::shared_ptr<MudBricksBlock> copy = std::make_shared<MudBricksBlock>();
  return copy;
}
