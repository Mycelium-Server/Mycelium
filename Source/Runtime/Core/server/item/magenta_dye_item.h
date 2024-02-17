#pragma once

#include "item.h"

class MagentaDyeItem : public Item {
 public:
  MagentaDyeItem();
  ~MagentaDyeItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
