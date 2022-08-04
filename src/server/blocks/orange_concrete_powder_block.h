#pragma once

#include "block.h"

class OrangeConcretePowderBlock : public Block {
 public:
  OrangeConcretePowderBlock();
  ~OrangeConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
