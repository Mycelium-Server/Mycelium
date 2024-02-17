#pragma once

#include "item.h"

class PurpleDyeItem : public Item {
 public:
  PurpleDyeItem();
  ~PurpleDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
