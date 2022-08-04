#pragma once

#include "block.h"

class TuffBlock : public Block {
 public:
  TuffBlock();
  ~TuffBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
