#pragma once

#include "block.h"

class EmeraldOreBlock : public Block {
 public:
  EmeraldOreBlock();
  ~EmeraldOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
