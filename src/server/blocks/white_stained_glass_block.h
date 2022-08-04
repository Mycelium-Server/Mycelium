#pragma once

#include "block.h"

class WhiteStainedGlassBlock : public Block {
 public:
  WhiteStainedGlassBlock();
  ~WhiteStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
