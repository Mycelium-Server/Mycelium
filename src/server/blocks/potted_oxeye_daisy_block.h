#pragma once

#include "block.h"

class PottedOxeyeDaisyBlock : public Block {
 public:
  PottedOxeyeDaisyBlock();
  ~PottedOxeyeDaisyBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
