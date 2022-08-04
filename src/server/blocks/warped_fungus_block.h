#pragma once

#include "block.h"

class WarpedFungusBlock : public Block {
 public:
  WarpedFungusBlock();
  ~WarpedFungusBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
