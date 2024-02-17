#pragma once

#include "block.h"

class ExposedCopperBlock : public Block {
 public:
  ExposedCopperBlock();
  ~ExposedCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
