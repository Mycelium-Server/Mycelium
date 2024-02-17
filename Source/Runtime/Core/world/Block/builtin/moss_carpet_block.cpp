

#include "moss_carpet_block.h"

MossCarpetBlock::MossCarpetBlock() = default;
MossCarpetBlock::~MossCarpetBlock() = default;

short MossCarpetBlock::getId() const {
  return 19716;
}

std::shared_ptr<Block> MossCarpetBlock::clone() const {
  std::shared_ptr<MossCarpetBlock> copy = std::make_shared<MossCarpetBlock>();
  return copy;
}
