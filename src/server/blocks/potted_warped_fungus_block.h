#pragma once

#include "block.h"

class PottedWarpedFungusBlock : public Block {
 public:
  PottedWarpedFungusBlock();
  ~PottedWarpedFungusBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
