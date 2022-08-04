#pragma once

#include "block.h"

class LightGrayStainedGlassBlock : public Block {
 public:
  LightGrayStainedGlassBlock();
  ~LightGrayStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
