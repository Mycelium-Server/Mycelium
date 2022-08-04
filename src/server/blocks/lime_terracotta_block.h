#pragma once

#include "block.h"

class LimeTerracottaBlock : public Block {
 public:
  LimeTerracottaBlock();
  ~LimeTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
