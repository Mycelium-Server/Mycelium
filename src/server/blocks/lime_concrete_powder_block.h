#pragma once

#include "block.h"

class LimeConcretePowderBlock : public Block {
 public:
  LimeConcretePowderBlock();
  ~LimeConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
