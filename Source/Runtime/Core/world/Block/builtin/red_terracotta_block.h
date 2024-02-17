#pragma once

#include "block.h"

class RedTerracottaBlock : public Block {
 public:
  RedTerracottaBlock();
  ~RedTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
