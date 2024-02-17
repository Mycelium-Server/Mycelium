#pragma once

#include "item.h"

class ChainmailLeggingsItem : public Item {
 public:
  ChainmailLeggingsItem();
  ~ChainmailLeggingsItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
