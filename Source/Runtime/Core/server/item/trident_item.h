#pragma once

#include "item.h"

class TridentItem : public Item {
 public:
  TridentItem();
  ~TridentItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
