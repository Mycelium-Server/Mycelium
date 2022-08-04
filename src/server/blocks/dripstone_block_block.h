#pragma once

#include "block.h"

class DripstoneBlockBlock : public Block {
 public:
  DripstoneBlockBlock();
  ~DripstoneBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
