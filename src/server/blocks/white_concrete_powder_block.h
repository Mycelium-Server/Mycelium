#pragma once

#include "block.h"

class WhiteConcretePowderBlock : public Block {
 public:
  WhiteConcretePowderBlock();
  ~WhiteConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
