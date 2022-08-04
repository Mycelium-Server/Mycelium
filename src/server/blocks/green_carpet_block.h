#pragma once

#include "block.h"

class GreenCarpetBlock : public Block {
 public:
  GreenCarpetBlock();
  ~GreenCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
