#pragma once

#include "item.h"

class MusicDiscWardItem : public Item {
 public:
  MusicDiscWardItem();
  ~MusicDiscWardItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
