#pragma once

#include "block.h"

class LightBlueTerracottaBlock : public Block {
 public:
  LightBlueTerracottaBlock();
  ~LightBlueTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
