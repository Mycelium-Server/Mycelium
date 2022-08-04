#pragma once

#include "block.h"

class CoarseDirtBlock : public Block {
 public:
  CoarseDirtBlock();
  ~CoarseDirtBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
