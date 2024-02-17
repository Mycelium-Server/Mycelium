#pragma once

#include "block.h"

class WaxedWeatheredCopperBlock : public Block {
 public:
  WaxedWeatheredCopperBlock();
  ~WaxedWeatheredCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
