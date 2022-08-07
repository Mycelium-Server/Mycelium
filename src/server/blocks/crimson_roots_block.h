#pragma once

#include "block.h"

class CrimsonRootsBlock : public Block {
 public:
  CrimsonRootsBlock();
  ~CrimsonRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
