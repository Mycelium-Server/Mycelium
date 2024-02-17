#pragma once

#include "item.h"

class MusicDisc11Item : public Item {
 public:
  MusicDisc11Item();
  ~MusicDisc11Item() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
