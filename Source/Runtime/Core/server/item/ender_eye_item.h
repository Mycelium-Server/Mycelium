#pragma once

#include "item.h"

class EnderEyeItem : public Item {
 public:
  EnderEyeItem();
  ~EnderEyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
