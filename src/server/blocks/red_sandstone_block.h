#pragma once

#include "block.h"

class RedSandstoneBlock : public Block {
 public:
  RedSandstoneBlock();
  ~RedSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
