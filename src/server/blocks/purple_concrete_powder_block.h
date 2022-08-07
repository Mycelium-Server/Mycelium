#pragma once

#include "block.h"

class PurpleConcretePowderBlock : public Block {
 public:
  PurpleConcretePowderBlock();
  ~PurpleConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
