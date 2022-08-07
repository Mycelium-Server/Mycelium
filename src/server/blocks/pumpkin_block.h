#pragma once

#include "block.h"

class PumpkinBlock : public Block {
 public:
  PumpkinBlock();
  ~PumpkinBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
