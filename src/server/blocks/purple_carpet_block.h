#pragma once

#include "block.h"

class PurpleCarpetBlock : public Block {
 public:
  PurpleCarpetBlock();
  ~PurpleCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};