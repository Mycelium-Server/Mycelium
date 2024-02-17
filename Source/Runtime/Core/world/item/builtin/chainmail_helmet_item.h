#pragma once

#include "item.h"

class ChainmailHelmetItem : public Item {
 public:
  ChainmailHelmetItem();
  ~ChainmailHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
