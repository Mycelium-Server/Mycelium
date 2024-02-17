#pragma once

#include "item.h"

class WarpedFungusOnAStickItem : public Item {
 public:
  WarpedFungusOnAStickItem();
  ~WarpedFungusOnAStickItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
