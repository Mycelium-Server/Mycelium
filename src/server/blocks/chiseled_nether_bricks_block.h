#pragma once

#include "block.h"

class ChiseledNetherBricksBlock : public Block {
 public:
  ChiseledNetherBricksBlock();
  ~ChiseledNetherBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
