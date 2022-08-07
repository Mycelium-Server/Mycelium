#pragma once

#include "block.h"

class ChiseledStoneBricksBlock : public Block {
 public:
  ChiseledStoneBricksBlock();
  ~ChiseledStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
