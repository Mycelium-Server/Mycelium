#pragma once

#include "block.h"

class ChiseledPolishedBlackstoneBlock : public Block {
 public:
  ChiseledPolishedBlackstoneBlock();
  ~ChiseledPolishedBlackstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
