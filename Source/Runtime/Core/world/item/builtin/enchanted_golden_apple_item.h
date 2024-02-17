#pragma once

#include "item.h"

class EnchantedGoldenAppleItem : public Item {
 public:
  EnchantedGoldenAppleItem();
  ~EnchantedGoldenAppleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
