#pragma once

#include "block.h"

class PackedMudBlock : public Block {
 public:
  PackedMudBlock();
  ~PackedMudBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
