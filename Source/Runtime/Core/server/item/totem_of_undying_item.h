#pragma once

#include "item.h"

class TotemOfUndyingItem : public Item {
 public:
  TotemOfUndyingItem();
  ~TotemOfUndyingItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
