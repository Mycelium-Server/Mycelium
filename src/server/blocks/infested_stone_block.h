#pragma once

#include "block.h"

class InfestedStoneBlock : public Block {
 public:
  InfestedStoneBlock();
  ~InfestedStoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
