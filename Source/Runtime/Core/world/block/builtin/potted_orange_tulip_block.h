#pragma once

#include "block.h"

class PottedOrangeTulipBlock : public Block {
 public:
  PottedOrangeTulipBlock();
  ~PottedOrangeTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
