#pragma once

#include "item.h"

class OrangeDyeItem : public Item {
 public:
  OrangeDyeItem();
  ~OrangeDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
