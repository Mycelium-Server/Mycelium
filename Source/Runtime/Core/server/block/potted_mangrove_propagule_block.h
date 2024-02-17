#pragma once

#include "block.h"

class PottedMangrovePropaguleBlock : public Block {
 public:
  PottedMangrovePropaguleBlock();
  ~PottedMangrovePropaguleBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
