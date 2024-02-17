#pragma once

#include "block.h"

class JunglePlanksBlock : public Block {
 public:
  JunglePlanksBlock();
  ~JunglePlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
