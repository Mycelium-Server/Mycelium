#pragma once

#include "block.h"

class GoldBlockBlock : public Block {
 public:
  GoldBlockBlock();
  ~GoldBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
