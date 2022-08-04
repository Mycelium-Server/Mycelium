#pragma once

#include "block.h"

class RedSandBlock : public Block {
 public:
  RedSandBlock();
  ~RedSandBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
