#pragma once

#include "block.h"

class SeagrassBlock : public Block {
 public:
  SeagrassBlock();
  ~SeagrassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
