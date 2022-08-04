#pragma once

#include "block.h"

class NetherSproutsBlock : public Block {
 public:
  NetherSproutsBlock();
  ~NetherSproutsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
