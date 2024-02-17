#pragma once

#include "item.h"

class MusicDiscWaitItem : public Item {
 public:
  MusicDiscWaitItem();
  ~MusicDiscWaitItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
