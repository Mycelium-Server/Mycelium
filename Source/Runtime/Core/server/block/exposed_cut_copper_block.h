#pragma once

#include "block.h"

class ExposedCutCopperBlock : public Block {
 public:
  ExposedCutCopperBlock();
  ~ExposedCutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
