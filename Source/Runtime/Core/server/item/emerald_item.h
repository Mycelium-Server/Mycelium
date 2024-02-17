#pragma once

#include "item.h"

class EmeraldItem : public Item {
 public:
  EmeraldItem();
  ~EmeraldItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
