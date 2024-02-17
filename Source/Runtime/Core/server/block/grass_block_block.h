#pragma once

#include "block.h"

class GrassBlockBlock : public Block {
 public:
  GrassBlockBlock();
  ~GrassBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    SNOWY_TRUE = 0,
    SNOWY_FALSE = 1,
  } snowy = SNOWY_FALSE;

};
