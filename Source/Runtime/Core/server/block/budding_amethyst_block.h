#pragma once

#include "block.h"

class BuddingAmethystBlock : public Block {
 public:
  BuddingAmethystBlock();
  ~BuddingAmethystBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
