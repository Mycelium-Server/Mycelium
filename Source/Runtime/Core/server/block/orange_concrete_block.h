#pragma once

#include "block.h"

class OrangeConcreteBlock : public Block {
 public:
  OrangeConcreteBlock();
  ~OrangeConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
