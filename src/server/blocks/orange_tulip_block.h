#pragma once

#include "block.h"

class OrangeTulipBlock : public Block {
 public:
  OrangeTulipBlock();
  ~OrangeTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
