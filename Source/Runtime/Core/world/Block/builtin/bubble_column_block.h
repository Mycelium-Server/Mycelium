#pragma once

#include "block.h"

class BubbleColumnBlock : public Block {
 public:
  BubbleColumnBlock();
  ~BubbleColumnBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    DRAG_TRUE = 0,
    DRAG_FALSE = 1,
  } drag = DRAG_TRUE;

};
