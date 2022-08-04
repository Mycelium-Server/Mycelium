#pragma once

#include "block.h"

class PrismarineBricksBlock : public Block {
 public:
  PrismarineBricksBlock();
  ~PrismarineBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
