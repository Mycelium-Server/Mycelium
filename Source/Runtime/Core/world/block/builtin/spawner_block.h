#pragma once

#include "block.h"

class SpawnerBlock : public Block {
 public:
  SpawnerBlock();
  ~SpawnerBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
