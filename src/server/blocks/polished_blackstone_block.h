#pragma once

#include "block.h"

class PolishedBlackstoneBlock : public Block {
 public:
  PolishedBlackstoneBlock();
  ~PolishedBlackstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
