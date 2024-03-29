#pragma once

#include "block.h"

class LilyOfTheValleyBlock : public Block {
 public:
  LilyOfTheValleyBlock();
  ~LilyOfTheValleyBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
