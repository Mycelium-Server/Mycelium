#pragma once

#include "item.h"

class PaperItem : public Item {
 public:
  PaperItem();
  ~PaperItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
