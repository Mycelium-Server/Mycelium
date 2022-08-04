#pragma once

#include "block.h"

class GrayTerracottaBlock : public Block {
 public:
  GrayTerracottaBlock();
  ~GrayTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
