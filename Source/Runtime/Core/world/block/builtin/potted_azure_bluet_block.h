#pragma once

#include "block.h"

class PottedAzureBluetBlock : public Block {
 public:
  PottedAzureBluetBlock();
  ~PottedAzureBluetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
