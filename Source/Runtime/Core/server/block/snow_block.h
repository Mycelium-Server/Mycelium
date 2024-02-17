#pragma once

#include "block.h"

class SnowBlock : public Block {
 public:
  SnowBlock();
  ~SnowBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    LAYERS_1 = 0,
    LAYERS_2 = 1,
    LAYERS_3 = 2,
    LAYERS_4 = 3,
    LAYERS_5 = 4,
    LAYERS_6 = 5,
    LAYERS_7 = 6,
    LAYERS_8 = 7,
  } layers = LAYERS_1;

};
