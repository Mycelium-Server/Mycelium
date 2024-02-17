#pragma once

#include "block.h"

class PolishedBlackstoneBricksBlock : public Block {
 public:
  PolishedBlackstoneBricksBlock();
  ~PolishedBlackstoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
