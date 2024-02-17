#pragma once

#include "block.h"

class PoppyBlock : public Block {
 public:
  PoppyBlock();
  ~PoppyBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
