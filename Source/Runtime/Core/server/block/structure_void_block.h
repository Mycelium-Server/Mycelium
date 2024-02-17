#pragma once

#include "block.h"

class StructureVoidBlock : public Block {
 public:
  StructureVoidBlock();
  ~StructureVoidBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
