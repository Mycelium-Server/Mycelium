#pragma once

#include "block.h"

class WeatheredCutCopperBlock : public Block {
 public:
  WeatheredCutCopperBlock();
  ~WeatheredCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
