#pragma once

#include "block.h"

class SmithingTableBlock : public Block {
 public:
  SmithingTableBlock();
  ~SmithingTableBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
