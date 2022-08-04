#pragma once

#include "block.h"

class CyanConcretePowderBlock : public Block {
 public:
  CyanConcretePowderBlock();
  ~CyanConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
