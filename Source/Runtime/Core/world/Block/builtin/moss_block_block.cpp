

#include "moss_block_block.h"

MossBlockBlock::MossBlockBlock() = default;
MossBlockBlock::~MossBlockBlock() = default;

short MossBlockBlock::getId() const {
  return 19717;
}

std::shared_ptr<Block> MossBlockBlock::clone() const {
  std::shared_ptr<MossBlockBlock> copy = std::make_shared<MossBlockBlock>();
  return copy;
}
