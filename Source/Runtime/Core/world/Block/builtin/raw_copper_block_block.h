#pragma once

#include "block.h"

class RawCopperBlockBlock : public Block {
 public:
  RawCopperBlockBlock();
  ~RawCopperBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
