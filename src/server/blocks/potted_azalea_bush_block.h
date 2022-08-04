#pragma once

#include "block.h"

class PottedAzaleaBushBlock : public Block {
 public:
  PottedAzaleaBushBlock();
  ~PottedAzaleaBushBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
