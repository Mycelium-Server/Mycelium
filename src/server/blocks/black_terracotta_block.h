#pragma once

#include "block.h"

class BlackTerracottaBlock : public Block {
 public:
  BlackTerracottaBlock();
  ~BlackTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
