#pragma once

#include "block.h"

class PurpleConcreteBlock : public Block {
 public:
  PurpleConcreteBlock();
  ~PurpleConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
