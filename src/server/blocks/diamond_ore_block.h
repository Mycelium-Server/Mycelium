#pragma once

#include "block.h"

class DiamondOreBlock : public Block {
 public:
  DiamondOreBlock();
  ~DiamondOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
