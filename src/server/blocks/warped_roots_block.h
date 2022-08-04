#pragma once

#include "block.h"

class WarpedRootsBlock : public Block {
 public:
  WarpedRootsBlock();
  ~WarpedRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
