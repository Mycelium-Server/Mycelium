#pragma once

#include "item.h"

class MusicDisc13Item : public Item {
 public:
  MusicDisc13Item();
  ~MusicDisc13Item() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
