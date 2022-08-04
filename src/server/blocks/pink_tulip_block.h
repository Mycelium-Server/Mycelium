#pragma once

#include "block.h"

class PinkTulipBlock : public Block {
 public:
  PinkTulipBlock();
  ~PinkTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
