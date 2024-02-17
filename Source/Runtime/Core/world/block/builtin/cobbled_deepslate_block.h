#pragma once

#include "block.h"

class CobbledDeepslateBlock : public Block {
 public:
  CobbledDeepslateBlock();
  ~CobbledDeepslateBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
