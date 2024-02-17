#pragma once

#include "item.h"

class SuspiciousStewItem : public Item {
 public:
  SuspiciousStewItem();
  ~SuspiciousStewItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
