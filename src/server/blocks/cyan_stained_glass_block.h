#pragma once

#include "block.h"

class CyanStainedGlassBlock : public Block {
 public:
  CyanStainedGlassBlock();
  ~CyanStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
