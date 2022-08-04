#pragma once

#include "block.h"

class YellowTerracottaBlock : public Block {
 public:
  YellowTerracottaBlock();
  ~YellowTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
