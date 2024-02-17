#pragma once

#include "block.h"

class BambooSaplingBlock : public Block {
 public:
  BambooSaplingBlock();
  ~BambooSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
