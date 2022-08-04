#pragma once

#include "block.h"

class BrownConcretePowderBlock : public Block {
 public:
  BrownConcretePowderBlock();
  ~BrownConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
