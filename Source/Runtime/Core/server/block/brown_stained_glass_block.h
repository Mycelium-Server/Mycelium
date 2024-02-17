#pragma once

#include "block.h"

class BrownStainedGlassBlock : public Block {
 public:
  BrownStainedGlassBlock();
  ~BrownStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
