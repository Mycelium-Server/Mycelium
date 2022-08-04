#pragma once

#include "block.h"

class GreenWoolBlock : public Block {
 public:
  GreenWoolBlock();
  ~GreenWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
