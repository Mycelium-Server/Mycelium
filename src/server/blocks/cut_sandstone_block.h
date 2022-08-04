#pragma once

#include "block.h"

class CutSandstoneBlock : public Block {
 public:
  CutSandstoneBlock();
  ~CutSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
