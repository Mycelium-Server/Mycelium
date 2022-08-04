#pragma once

#include "block.h"

class CrackedStoneBricksBlock : public Block {
 public:
  CrackedStoneBricksBlock();
  ~CrackedStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
