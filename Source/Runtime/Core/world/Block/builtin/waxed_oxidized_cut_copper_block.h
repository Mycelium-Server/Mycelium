#pragma once

#include "block.h"

class WaxedOxidizedCutCopperBlock : public Block {
 public:
  WaxedOxidizedCutCopperBlock();
  ~WaxedOxidizedCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
