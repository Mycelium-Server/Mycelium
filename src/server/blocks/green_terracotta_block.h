#pragma once

#include "block.h"

class GreenTerracottaBlock : public Block {
 public:
  GreenTerracottaBlock();
  ~GreenTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
