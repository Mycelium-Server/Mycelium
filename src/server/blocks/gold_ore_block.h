#pragma once

#include "block.h"

class GoldOreBlock : public Block {
 public:
  GoldOreBlock();
  ~GoldOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
