#pragma once

#include "block.h"

class GravelBlock : public Block {
 public:
  GravelBlock();
  ~GravelBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
