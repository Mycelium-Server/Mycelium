#pragma once

#include "block.h"

class AmethystBlockBlock : public Block {
 public:
  AmethystBlockBlock();
  ~AmethystBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
