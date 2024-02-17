#pragma once

#include "block.h"

class OxidizedCopperBlock : public Block {
 public:
  OxidizedCopperBlock();
  ~OxidizedCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
