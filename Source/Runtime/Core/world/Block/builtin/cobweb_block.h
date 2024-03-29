#pragma once

#include "block.h"

class CobwebBlock : public Block {
 public:
  CobwebBlock();
  ~CobwebBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
