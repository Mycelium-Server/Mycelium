#pragma once

#include "block.h"

class CopperBlockBlock : public Block {
 public:
  CopperBlockBlock();
  ~CopperBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
