#pragma once

#include "block.h"

class IronOreBlock : public Block {
 public:
  IronOreBlock();
  ~IronOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
