#pragma once

#include "block.h"

class LilyPadBlock : public Block {
 public:
  LilyPadBlock();
  ~LilyPadBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
