#pragma once

#include "block.h"

class SmoothBasaltBlock : public Block {
 public:
  SmoothBasaltBlock();
  ~SmoothBasaltBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
