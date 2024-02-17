#pragma once

#include "block.h"

class ReinforcedDeepslateBlock : public Block {
 public:
  ReinforcedDeepslateBlock();
  ~ReinforcedDeepslateBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
