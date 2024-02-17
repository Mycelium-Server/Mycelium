#pragma once

#include "block.h"

class SprucePlanksBlock : public Block {
 public:
  SprucePlanksBlock();
  ~SprucePlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
