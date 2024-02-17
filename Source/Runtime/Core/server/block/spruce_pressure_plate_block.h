#pragma once

#include "block.h"

class SprucePressurePlateBlock : public Block {
 public:
  SprucePressurePlateBlock();
  ~SprucePressurePlateBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
