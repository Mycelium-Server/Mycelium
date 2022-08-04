#pragma once

#include "block.h"

class PottedWarpedRootsBlock : public Block {
 public:
  PottedWarpedRootsBlock();
  ~PottedWarpedRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
