#pragma once

#include "block.h"

class LightBlueWoolBlock : public Block {
 public:
  LightBlueWoolBlock();
  ~LightBlueWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
