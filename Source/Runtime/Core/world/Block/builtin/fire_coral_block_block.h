#pragma once

#include "block.h"

class FireCoralBlockBlock : public Block {
 public:
  FireCoralBlockBlock();
  ~FireCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
