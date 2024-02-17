#pragma once

#include "block.h"

class GreenConcreteBlock : public Block {
 public:
  GreenConcreteBlock();
  ~GreenConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
