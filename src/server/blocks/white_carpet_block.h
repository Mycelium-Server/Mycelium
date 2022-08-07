#pragma once

#include "block.h"

class WhiteCarpetBlock : public Block {
 public:
  WhiteCarpetBlock();
  ~WhiteCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
