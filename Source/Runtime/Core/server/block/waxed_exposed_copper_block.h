#pragma once

#include "block.h"

class WaxedExposedCopperBlock : public Block {
 public:
  WaxedExposedCopperBlock();
  ~WaxedExposedCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
