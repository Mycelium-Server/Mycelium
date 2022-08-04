#pragma once

#include "block.h"

class DirtPathBlock : public Block {
 public:
  DirtPathBlock();
  ~DirtPathBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
