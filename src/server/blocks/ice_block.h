#pragma once

#include "block.h"

class IceBlock : public Block {
 public:
  IceBlock();
  ~IceBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
