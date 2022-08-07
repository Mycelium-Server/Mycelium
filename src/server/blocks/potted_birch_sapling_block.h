#pragma once

#include "block.h"

class PottedBirchSaplingBlock : public Block {
 public:
  PottedBirchSaplingBlock();
  ~PottedBirchSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
