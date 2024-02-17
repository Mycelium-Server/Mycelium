#pragma once

#include "block.h"

class AzureBluetBlock : public Block {
 public:
  AzureBluetBlock();
  ~AzureBluetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
