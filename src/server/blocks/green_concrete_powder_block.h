#pragma once

#include "block.h"

class GreenConcretePowderBlock : public Block {
 public:
  GreenConcretePowderBlock();
  ~GreenConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
