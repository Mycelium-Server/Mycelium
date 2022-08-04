#pragma once

#include "block.h"

class SoulSandBlock : public Block {
 public:
  SoulSandBlock();
  ~SoulSandBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
