#pragma once

#include "block.h"

class MossCarpetBlock : public Block {
 public:
  MossCarpetBlock();
  ~MossCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
