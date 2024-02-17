#pragma once

#include "block.h"

class LimeConcreteBlock : public Block {
 public:
  LimeConcreteBlock();
  ~LimeConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
