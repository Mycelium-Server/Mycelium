#pragma once

#include "item.h"

class LingeringPotionItem : public Item {
 public:
  LingeringPotionItem();
  ~LingeringPotionItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
