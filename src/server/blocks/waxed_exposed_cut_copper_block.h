#pragma once

#include "block.h"

class WaxedExposedCutCopperBlock : public Block {
 public:
  WaxedExposedCutCopperBlock();
  ~WaxedExposedCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
