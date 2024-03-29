#pragma once

#include "block.h"

class WaxedCopperBlockBlock : public Block {
 public:
  WaxedCopperBlockBlock();
  ~WaxedCopperBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
