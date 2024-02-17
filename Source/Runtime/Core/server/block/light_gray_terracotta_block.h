#pragma once

#include "block.h"

class LightGrayTerracottaBlock : public Block {
 public:
  LightGrayTerracottaBlock();
  ~LightGrayTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
