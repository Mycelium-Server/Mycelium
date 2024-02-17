#pragma once

#include "block.h"

class WhiteTulipBlock : public Block {
 public:
  WhiteTulipBlock();
  ~WhiteTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
