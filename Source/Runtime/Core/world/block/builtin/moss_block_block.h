#pragma once

#include "block.h"

class MossBlockBlock : public Block {
 public:
  MossBlockBlock();
  ~MossBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
