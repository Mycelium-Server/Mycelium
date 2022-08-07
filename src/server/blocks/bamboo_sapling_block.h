#pragma once

#include "block.h"

class BambooSaplingBlock : public Block {
 public:
  BambooSaplingBlock();
  ~BambooSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
