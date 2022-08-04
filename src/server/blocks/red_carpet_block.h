#pragma once

#include "block.h"

class RedCarpetBlock : public Block {
 public:
  RedCarpetBlock();
  ~RedCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
