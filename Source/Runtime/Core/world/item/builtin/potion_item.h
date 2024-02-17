#pragma once

#include "item.h"

class PotionItem : public Item {
 public:
  PotionItem();
  ~PotionItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
