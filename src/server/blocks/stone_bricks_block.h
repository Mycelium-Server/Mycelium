#pragma once

#include "block.h"

class StoneBricksBlock : public Block {
 public:
  StoneBricksBlock();
  ~StoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
