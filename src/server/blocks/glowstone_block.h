#pragma once

#include "block.h"

class GlowstoneBlock : public Block {
 public:
  GlowstoneBlock();
  ~GlowstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
