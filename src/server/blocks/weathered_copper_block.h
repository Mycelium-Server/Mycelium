#pragma once

#include "block.h"

class WeatheredCopperBlock : public Block {
 public:
  WeatheredCopperBlock();
  ~WeatheredCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
