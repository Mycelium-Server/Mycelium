#pragma once

#include "item.h"

class CookieItem : public Item {
 public:
  CookieItem();
  ~CookieItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
