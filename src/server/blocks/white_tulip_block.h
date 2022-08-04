#pragma once

#include "block.h"

class WhiteTulipBlock : public Block {
 public:
  WhiteTulipBlock();
  ~WhiteTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
