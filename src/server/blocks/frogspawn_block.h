#pragma once

#include "block.h"

class FrogspawnBlock : public Block {
 public:
  FrogspawnBlock();
  ~FrogspawnBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
