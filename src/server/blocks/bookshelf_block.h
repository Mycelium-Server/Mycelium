#pragma once

#include "block.h"

class BookshelfBlock : public Block {
 public:
  BookshelfBlock();
  ~BookshelfBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
