#pragma once

#include "block.h"

class PottedDarkOakSaplingBlock : public Block {
 public:
  PottedDarkOakSaplingBlock();
  ~PottedDarkOakSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
