#pragma once

#include "block.h"

class MangrovePlanksBlock : public Block {
 public:
  MangrovePlanksBlock();
  ~MangrovePlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
