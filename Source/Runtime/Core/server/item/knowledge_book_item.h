#pragma once

#include "item.h"

class KnowledgeBookItem : public Item {
 public:
  KnowledgeBookItem();
  ~KnowledgeBookItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
