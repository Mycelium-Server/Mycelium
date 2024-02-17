#pragma once

#include "block.h"

class PinkStainedGlassBlock : public Block {
 public:
  PinkStainedGlassBlock();
  ~PinkStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
