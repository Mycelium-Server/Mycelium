#pragma once

#include "block.h"

class PottedFloweringAzaleaBushBlock : public Block {
 public:
  PottedFloweringAzaleaBushBlock();
  ~PottedFloweringAzaleaBushBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
