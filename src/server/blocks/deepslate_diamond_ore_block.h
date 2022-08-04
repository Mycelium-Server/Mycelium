#pragma once

#include "block.h"

class DeepslateDiamondOreBlock : public Block {
 public:
  DeepslateDiamondOreBlock();
  ~DeepslateDiamondOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
