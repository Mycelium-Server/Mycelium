#pragma once

#include "block.h"

class PinkTerracottaBlock : public Block {
 public:
  PinkTerracottaBlock();
  ~PinkTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
