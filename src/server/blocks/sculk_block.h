#pragma once

#include "block.h"

class SculkBlock : public Block {
 public:
  SculkBlock();
  ~SculkBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
