#pragma once

#include "item.h"

class EnchantedBookItem : public Item {
 public:
  EnchantedBookItem();
  ~EnchantedBookItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
