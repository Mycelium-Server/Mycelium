#pragma once

#include "item.h"

class MusicDiscStradItem : public Item {
 public:
  MusicDiscStradItem();
  ~MusicDiscStradItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
