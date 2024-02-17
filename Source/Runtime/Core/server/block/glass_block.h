#pragma once

#include "block.h"

class GlassBlock : public Block {
 public:
  GlassBlock();
  ~GlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
