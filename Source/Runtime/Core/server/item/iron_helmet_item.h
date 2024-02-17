#pragma once

#include "item.h"

class IronHelmetItem : public Item {
 public:
  IronHelmetItem();
  ~IronHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
