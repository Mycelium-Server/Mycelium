#pragma once

#include "block.h"

class BrownTerracottaBlock : public Block {
 public:
  BrownTerracottaBlock();
  ~BrownTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
