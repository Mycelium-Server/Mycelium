#pragma once

#include "block.h"

class GlassBlock : public Block {
 public:
  GlassBlock();
  ~GlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
