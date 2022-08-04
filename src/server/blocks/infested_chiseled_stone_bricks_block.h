#pragma once

#include "block.h"

class InfestedChiseledStoneBricksBlock : public Block {
 public:
  InfestedChiseledStoneBricksBlock();
  ~InfestedChiseledStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
