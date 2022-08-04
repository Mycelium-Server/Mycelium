#pragma once

#include "block.h"

class PackedIceBlock : public Block {
 public:
  PackedIceBlock();
  ~PackedIceBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
