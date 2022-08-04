#pragma once

#include "block.h"

class SandBlock : public Block {
 public:
  SandBlock();
  ~SandBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
