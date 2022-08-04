#pragma once

#include "block.h"

class WaxedOxidizedCutCopperBlock : public Block {
 public:
  WaxedOxidizedCutCopperBlock();
  ~WaxedOxidizedCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
