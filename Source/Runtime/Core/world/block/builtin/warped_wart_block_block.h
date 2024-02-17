#pragma once

#include "block.h"

class WarpedWartBlockBlock : public Block {
 public:
  WarpedWartBlockBlock();
  ~WarpedWartBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
