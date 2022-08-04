#pragma once

#include "block.h"

class YellowStainedGlassBlock : public Block {
 public:
  YellowStainedGlassBlock();
  ~YellowStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
