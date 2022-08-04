#pragma once

#include "block.h"

class GrayWoolBlock : public Block {
 public:
  GrayWoolBlock();
  ~GrayWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
