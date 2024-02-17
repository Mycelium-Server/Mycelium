#pragma once

#include "block.h"

class BedrockBlock : public Block {
 public:
  BedrockBlock();
  ~BedrockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
