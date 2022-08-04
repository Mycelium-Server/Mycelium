#pragma once

#include "block.h"

class GreenStainedGlassBlock : public Block {
 public:
  GreenStainedGlassBlock();
  ~GreenStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
