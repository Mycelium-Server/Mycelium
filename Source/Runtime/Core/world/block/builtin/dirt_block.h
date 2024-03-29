#pragma once

#include "block.h"

class DirtBlock : public Block {
 public:
  DirtBlock();
  ~DirtBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
