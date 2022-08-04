#pragma once

#include "block.h"

class MagentaConcretePowderBlock : public Block {
 public:
  MagentaConcretePowderBlock();
  ~MagentaConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
