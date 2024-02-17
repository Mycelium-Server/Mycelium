#pragma once

#include "item.h"

class CodItem : public Item {
 public:
  CodItem();
  ~CodItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
