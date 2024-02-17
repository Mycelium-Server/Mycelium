#pragma once

#include "block.h"

class PurpleTerracottaBlock : public Block {
 public:
  PurpleTerracottaBlock();
  ~PurpleTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
