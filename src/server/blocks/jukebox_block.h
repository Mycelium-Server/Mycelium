#pragma once

#include "block.h"

class JukeboxBlock : public Block {
 public:
  JukeboxBlock();
  ~JukeboxBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    HAS_RECORD_TRUE = 0,
    HAS_RECORD_FALSE = 1,
  } has_record = HAS_RECORD_FALSE;

};
