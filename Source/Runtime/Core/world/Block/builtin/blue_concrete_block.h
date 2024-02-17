#pragma once

#include "block.h"

class BlueConcreteBlock : public Block {
 public:
  BlueConcreteBlock();
  ~BlueConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
