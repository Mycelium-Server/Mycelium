#pragma once

#include "block.h"

class GrayCarpetBlock : public Block {
 public:
  GrayCarpetBlock();
  ~GrayCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
