#pragma once

#include "block.h"

class PottedWhiteTulipBlock : public Block {
 public:
  PottedWhiteTulipBlock();
  ~PottedWhiteTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
