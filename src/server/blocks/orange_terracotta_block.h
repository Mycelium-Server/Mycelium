#pragma once

#include "block.h"

class OrangeTerracottaBlock : public Block {
 public:
  OrangeTerracottaBlock();
  ~OrangeTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
