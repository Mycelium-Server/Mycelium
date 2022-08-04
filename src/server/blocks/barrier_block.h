#pragma once

#include "block.h"

class BarrierBlock : public Block {
 public:
  BarrierBlock();
  ~BarrierBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
