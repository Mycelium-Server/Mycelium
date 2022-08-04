#pragma once

#include "block.h"

class CrackedPolishedBlackstoneBricksBlock : public Block {
 public:
  CrackedPolishedBlackstoneBricksBlock();
  ~CrackedPolishedBlackstoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
