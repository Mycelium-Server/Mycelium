#pragma once

#include "block.h"

class PurpleStainedGlassBlock : public Block {
 public:
  PurpleStainedGlassBlock();
  ~PurpleStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
