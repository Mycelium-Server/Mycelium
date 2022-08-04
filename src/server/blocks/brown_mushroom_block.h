#pragma once

#include "block.h"

class BrownMushroomBlock : public Block {
 public:
  BrownMushroomBlock();
  ~BrownMushroomBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
