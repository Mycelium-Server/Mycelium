#pragma once

#include "block.h"

class HoneyBlockBlock : public Block {
 public:
  HoneyBlockBlock();
  ~HoneyBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
