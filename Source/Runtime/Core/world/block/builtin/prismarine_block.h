#pragma once

#include "block.h"

class PrismarineBlock : public Block {
 public:
  PrismarineBlock();
  ~PrismarineBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
