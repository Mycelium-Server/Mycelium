#pragma once

#include "block.h"

class AcaciaPlanksBlock : public Block {
 public:
  AcaciaPlanksBlock();
  ~AcaciaPlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
