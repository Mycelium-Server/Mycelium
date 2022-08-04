#pragma once

#include "block.h"

class GrayStainedGlassBlock : public Block {
 public:
  GrayStainedGlassBlock();
  ~GrayStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
