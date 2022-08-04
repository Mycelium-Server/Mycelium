#pragma once

#include "block.h"

class FarmlandBlock : public Block {
 public:
  FarmlandBlock();
  ~FarmlandBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    MOISTURE_0 = 0,
    MOISTURE_1 = 1,
    MOISTURE_2 = 2,
    MOISTURE_3 = 3,
    MOISTURE_4 = 4,
    MOISTURE_5 = 5,
    MOISTURE_6 = 6,
    MOISTURE_7 = 7,
  } moisture = MOISTURE_0;

};
