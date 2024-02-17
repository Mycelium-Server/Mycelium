#pragma once

#include "block.h"

class GrayTerracottaBlock : public Block {
 public:
  GrayTerracottaBlock();
  ~GrayTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
