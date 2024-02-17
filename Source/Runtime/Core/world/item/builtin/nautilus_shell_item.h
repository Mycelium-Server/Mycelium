#pragma once

#include "item.h"

class NautilusShellItem : public Item {
 public:
  NautilusShellItem();
  ~NautilusShellItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
