#pragma once

#include "block.h"

class OxidizedCutCopperBlock : public Block {
 public:
  OxidizedCutCopperBlock();
  ~OxidizedCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
