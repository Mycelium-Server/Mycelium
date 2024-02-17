#pragma once

#include "item.h"

class ChainmailChestplateItem : public Item {
 public:
  ChainmailChestplateItem();
  ~ChainmailChestplateItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
