

#include "bookshelf_block.h"

BookshelfBlock::BookshelfBlock() = default;
BookshelfBlock::~BookshelfBlock() = default;

short BookshelfBlock::getId() const {
  return 1686;
}

std::shared_ptr<Block> BookshelfBlock::clone() const {
  std::shared_ptr<BookshelfBlock> copy = std::make_shared<BookshelfBlock>();
  return copy;
}
