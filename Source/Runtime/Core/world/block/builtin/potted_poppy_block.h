#pragma once

#include "block.h"

class PottedPoppyBlock : public Block {
 public:
  PottedPoppyBlock();
  ~PottedPoppyBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
