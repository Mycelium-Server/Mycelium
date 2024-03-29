#pragma once

#include "block.h"

class PottedOakSaplingBlock : public Block {
 public:
  PottedOakSaplingBlock();
  ~PottedOakSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
