#pragma once

#include "block.h"

class WaxedCutCopperBlock : public Block {
 public:
  WaxedCutCopperBlock();
  ~WaxedCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
