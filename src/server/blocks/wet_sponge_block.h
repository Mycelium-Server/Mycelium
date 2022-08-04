#pragma once

#include "block.h"

class WetSpongeBlock : public Block {
 public:
  WetSpongeBlock();
  ~WetSpongeBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
