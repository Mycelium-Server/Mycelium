#pragma once

#include "block.h"

class LightBlueStainedGlassBlock : public Block {
 public:
  LightBlueStainedGlassBlock();
  ~LightBlueStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
