#pragma once

#include "item.h"

class MusicDiscBlocksItem : public Item {
 public:
  MusicDiscBlocksItem();
  ~MusicDiscBlocksItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
