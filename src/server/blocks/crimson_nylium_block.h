#pragma once

#include "block.h"

class CrimsonNyliumBlock : public Block {
 public:
  CrimsonNyliumBlock();
  ~CrimsonNyliumBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
