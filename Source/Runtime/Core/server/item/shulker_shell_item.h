#pragma once

#include "item.h"

class ShulkerShellItem : public Item {
 public:
  ShulkerShellItem();
  ~ShulkerShellItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
