#pragma once

#include "block.h"

class WhiteConcreteBlock : public Block {
 public:
  WhiteConcreteBlock();
  ~WhiteConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
