#pragma once

#include "block.h"

class RedStainedGlassBlock : public Block {
 public:
  RedStainedGlassBlock();
  ~RedStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
