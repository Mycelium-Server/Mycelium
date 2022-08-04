#pragma once

#include "block.h"

class LavaCauldronBlock : public Block {
 public:
  LavaCauldronBlock();
  ~LavaCauldronBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
