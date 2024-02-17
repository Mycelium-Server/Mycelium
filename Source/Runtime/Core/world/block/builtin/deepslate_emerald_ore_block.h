#pragma once

#include "block.h"

class DeepslateEmeraldOreBlock : public Block {
 public:
  DeepslateEmeraldOreBlock();
  ~DeepslateEmeraldOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
