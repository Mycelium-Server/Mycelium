#pragma once

#include "block.h"

class PottedLilyOfTheValleyBlock : public Block {
 public:
  PottedLilyOfTheValleyBlock();
  ~PottedLilyOfTheValleyBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
