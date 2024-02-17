#pragma once

#include "item.h"

class AppleItem : public Item {
 public:
  AppleItem();
  ~AppleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
