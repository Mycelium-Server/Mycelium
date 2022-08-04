#pragma once

#include "block.h"

class PottedDandelionBlock : public Block {
 public:
  PottedDandelionBlock();
  ~PottedDandelionBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
