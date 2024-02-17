#pragma once

#include <memory>

class Item {
 public:
  Item();
  virtual ~Item();

 public:
  [[nodiscard]] virtual int getID() const = 0;
  [[nodiscard]] virtual bool isBlockItem() const;
  [[nodiscard]] virtual std::shared_ptr<Item> clone() const = 0;
};