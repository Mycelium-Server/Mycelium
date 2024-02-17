#pragma once

#include "item.h"

class SplashPotionItem : public Item {
 public:
  SplashPotionItem();
  ~SplashPotionItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
