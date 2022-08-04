#pragma once

#include "block.h"

class NetheriteBlockBlock : public Block {
 public:
  NetheriteBlockBlock();
  ~NetheriteBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
