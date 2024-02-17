#pragma once

#include "block.h"

class PowderSnowBlock : public Block {
 public:
  PowderSnowBlock();
  ~PowderSnowBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
