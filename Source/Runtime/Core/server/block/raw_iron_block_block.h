#pragma once

#include "block.h"

class RawIronBlockBlock : public Block {
 public:
  RawIronBlockBlock();
  ~RawIronBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
