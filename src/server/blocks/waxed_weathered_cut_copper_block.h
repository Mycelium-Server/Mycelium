#pragma once

#include "block.h"

class WaxedWeatheredCutCopperBlock : public Block {
 public:
  WaxedWeatheredCutCopperBlock();
  ~WaxedWeatheredCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
