#pragma once

#include "block.h"

class BlackConcretePowderBlock : public Block {
 public:
  BlackConcretePowderBlock();
  ~BlackConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
