#pragma once

#include "block.h"

class MossCarpetBlock : public Block {
 public:
  MossCarpetBlock();
  ~MossCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
