#pragma once

#include "item.h"

class FermentedSpiderEyeItem : public Item {
 public:
  FermentedSpiderEyeItem();
  ~FermentedSpiderEyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
