#pragma once

#include "block.h"

class StructureBlockBlock : public Block {
 public:
  StructureBlockBlock();
  ~StructureBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    MODE_SAVE = 0,
    MODE_LOAD = 1,
    MODE_CORNER = 2,
    MODE_DATA = 3,
  } mode = MODE_LOAD;

};
