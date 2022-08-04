#pragma once

#include "block.h"

class InfestedMossyStoneBricksBlock : public Block {
 public:
  InfestedMossyStoneBricksBlock();
  ~InfestedMossyStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
