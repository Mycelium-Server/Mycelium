#pragma once

#include "block.h"

class PolishedDeepslateBlock : public Block {
 public:
  PolishedDeepslateBlock();
  ~PolishedDeepslateBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
