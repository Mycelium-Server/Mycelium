#pragma once

#include "block.h"

class NetherrackBlock : public Block {
 public:
  NetherrackBlock();
  ~NetherrackBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
