#pragma once

#include "block.h"

class SmoothQuartzBlock : public Block {
 public:
  SmoothQuartzBlock();
  ~SmoothQuartzBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
