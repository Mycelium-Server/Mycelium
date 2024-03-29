#pragma once

#include "block.h"

class BlueTerracottaBlock : public Block {
 public:
  BlueTerracottaBlock();
  ~BlueTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
