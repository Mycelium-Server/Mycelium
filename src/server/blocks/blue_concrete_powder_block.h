#pragma once

#include "block.h"

class BlueConcretePowderBlock : public Block {
 public:
  BlueConcretePowderBlock();
  ~BlueConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
