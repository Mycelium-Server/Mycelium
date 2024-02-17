#pragma once

#include "block.h"

class WhiteTerracottaBlock : public Block {
 public:
  WhiteTerracottaBlock();
  ~WhiteTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
