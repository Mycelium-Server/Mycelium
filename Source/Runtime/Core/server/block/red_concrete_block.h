#pragma once

#include "block.h"

class RedConcreteBlock : public Block {
 public:
  RedConcreteBlock();
  ~RedConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
