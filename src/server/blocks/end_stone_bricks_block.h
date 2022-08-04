#pragma once

#include "block.h"

class EndStoneBricksBlock : public Block {
 public:
  EndStoneBricksBlock();
  ~EndStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
