#pragma once

#include "block.h"

class PottedPinkTulipBlock : public Block {
 public:
  PottedPinkTulipBlock();
  ~PottedPinkTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
