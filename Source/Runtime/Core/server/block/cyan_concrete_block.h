#pragma once

#include "block.h"

class CyanConcreteBlock : public Block {
 public:
  CyanConcreteBlock();
  ~CyanConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
