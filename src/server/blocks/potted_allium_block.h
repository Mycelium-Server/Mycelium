#pragma once

#include "block.h"

class PottedAlliumBlock : public Block {
 public:
  PottedAlliumBlock();
  ~PottedAlliumBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
