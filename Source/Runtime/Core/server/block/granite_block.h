#pragma once

#include "block.h"

class GraniteBlock : public Block {
 public:
  GraniteBlock();
  ~GraniteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
