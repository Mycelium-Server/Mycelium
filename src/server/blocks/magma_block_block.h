#pragma once

#include "block.h"

class MagmaBlockBlock : public Block {
 public:
  MagmaBlockBlock();
  ~MagmaBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
