#pragma once

#include "block.h"

class MagentaTerracottaBlock : public Block {
 public:
  MagentaTerracottaBlock();
  ~MagentaTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
