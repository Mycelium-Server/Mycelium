#pragma once

#include "block.h"

class SpongeBlock : public Block {
 public:
  SpongeBlock();
  ~SpongeBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
