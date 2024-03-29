#pragma once

#include "block.h"

class TerracottaBlock : public Block {
 public:
  TerracottaBlock();
  ~TerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
