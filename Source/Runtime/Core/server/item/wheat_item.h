#pragma once

#include "item.h"

class WheatItem : public Item {
 public:
  WheatItem();
  ~WheatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
