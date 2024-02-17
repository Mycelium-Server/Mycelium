#pragma once

#include "block.h"

class BlackStainedGlassBlock : public Block {
 public:
  BlackStainedGlassBlock();
  ~BlackStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
