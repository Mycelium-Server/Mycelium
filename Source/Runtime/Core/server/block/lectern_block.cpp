

#include "lectern_block.h"

LecternBlock::LecternBlock() = default;
LecternBlock::~LecternBlock() = default;

short LecternBlock::getId() const {
  return 16038 + powered * 1 + has_book * 2 + facing * 4;
}

std::shared_ptr<Block> LecternBlock::clone() const {
  std::shared_ptr<LecternBlock> copy = std::make_shared<LecternBlock>();
  copy->facing = facing;
  copy->has_book = has_book;
  copy->powered = powered;
  return copy;
}
