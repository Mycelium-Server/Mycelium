#pragma once

#include "block.h"

class GrayConcretePowderBlock : public Block {
 public:
  GrayConcretePowderBlock();
  ~GrayConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
