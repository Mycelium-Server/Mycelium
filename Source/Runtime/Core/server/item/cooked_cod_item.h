#pragma once

#include "item.h"

class CookedCodItem : public Item {
 public:
  CookedCodItem();
  ~CookedCodItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
