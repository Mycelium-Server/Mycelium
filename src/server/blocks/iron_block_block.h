#pragma once

#include "block.h"

class IronBlockBlock : public Block {
 public:
  IronBlockBlock();
  ~IronBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
