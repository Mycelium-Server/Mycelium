#pragma once

#include "block.h"

class SmoothStoneBlock : public Block {
 public:
  SmoothStoneBlock();
  ~SmoothStoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
