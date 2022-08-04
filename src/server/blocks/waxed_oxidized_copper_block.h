#pragma once

#include "block.h"

class WaxedOxidizedCopperBlock : public Block {
 public:
  WaxedOxidizedCopperBlock();
  ~WaxedOxidizedCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
