#pragma once

#include "block.h"

class PinkCarpetBlock : public Block {
 public:
  PinkCarpetBlock();
  ~PinkCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
