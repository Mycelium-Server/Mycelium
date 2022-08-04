#pragma once

#include "block.h"

class LightGrayWoolBlock : public Block {
 public:
  LightGrayWoolBlock();
  ~LightGrayWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
