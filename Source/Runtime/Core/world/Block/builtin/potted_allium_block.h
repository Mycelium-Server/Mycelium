#pragma once

#include "block.h"

class PottedAlliumBlock : public Block {
 public:
  PottedAlliumBlock();
  ~PottedAlliumBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
