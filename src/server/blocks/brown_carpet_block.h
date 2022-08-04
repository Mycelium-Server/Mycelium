#pragma once

#include "block.h"

class BrownCarpetBlock : public Block {
 public:
  BrownCarpetBlock();
  ~BrownCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
