#pragma once

#include "item.h"

class ChainmailBootsItem : public Item {
 public:
  ChainmailBootsItem();
  ~ChainmailBootsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
