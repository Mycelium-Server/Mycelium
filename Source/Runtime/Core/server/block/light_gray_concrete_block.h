#pragma once

#include "block.h"

class LightGrayConcreteBlock : public Block {
 public:
  LightGrayConcreteBlock();
  ~LightGrayConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
