#pragma once

#include "block.h"

class RedstoneBlockBlock : public Block {
 public:
  RedstoneBlockBlock();
  ~RedstoneBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
