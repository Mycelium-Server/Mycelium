#pragma once

#include "block.h"

class PottedRedMushroomBlock : public Block {
 public:
  PottedRedMushroomBlock();
  ~PottedRedMushroomBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
