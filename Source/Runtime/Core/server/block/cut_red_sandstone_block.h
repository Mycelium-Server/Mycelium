#pragma once

#include "block.h"

class CutRedSandstoneBlock : public Block {
 public:
  CutRedSandstoneBlock();
  ~CutRedSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
