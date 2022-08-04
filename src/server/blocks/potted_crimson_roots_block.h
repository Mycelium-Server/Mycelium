#pragma once

#include "block.h"

class PottedCrimsonRootsBlock : public Block {
 public:
  PottedCrimsonRootsBlock();
  ~PottedCrimsonRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
