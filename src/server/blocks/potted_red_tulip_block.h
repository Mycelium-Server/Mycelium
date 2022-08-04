#pragma once

#include "block.h"

class PottedRedTulipBlock : public Block {
 public:
  PottedRedTulipBlock();
  ~PottedRedTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
