#pragma once

#include "block.h"

class DandelionBlock : public Block {
 public:
  DandelionBlock();
  ~DandelionBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
