#pragma once

#include "block.h"

class PottedAcaciaSaplingBlock : public Block {
 public:
  PottedAcaciaSaplingBlock();
  ~PottedAcaciaSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
