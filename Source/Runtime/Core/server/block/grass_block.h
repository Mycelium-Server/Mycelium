#pragma once

#include "block.h"

class GrassBlock : public Block {
 public:
  GrassBlock();
  ~GrassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
