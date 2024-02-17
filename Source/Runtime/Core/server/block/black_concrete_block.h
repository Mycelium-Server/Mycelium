#pragma once

#include "block.h"

class BlackConcreteBlock : public Block {
 public:
  BlackConcreteBlock();
  ~BlackConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
