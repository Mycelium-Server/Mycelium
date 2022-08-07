#pragma once

#include "block.h"

class ChiseledDeepslateBlock : public Block {
 public:
  ChiseledDeepslateBlock();
  ~ChiseledDeepslateBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
