#pragma once

#include "block.h"

class LapisBlockBlock : public Block {
 public:
  LapisBlockBlock();
  ~LapisBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
