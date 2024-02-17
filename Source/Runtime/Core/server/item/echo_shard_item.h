#pragma once

#include "item.h"

class EchoShardItem : public Item {
 public:
  EchoShardItem();
  ~EchoShardItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
