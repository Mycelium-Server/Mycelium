#pragma once

#include "block.h"

class PinkConcreteBlock : public Block {
 public:
  PinkConcreteBlock();
  ~PinkConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
