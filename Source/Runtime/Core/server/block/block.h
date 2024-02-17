#pragma once

#include <memory>

class Block {
 public:
  Block();
  virtual ~Block();

 public:
  [[nodiscard]] virtual short getId() const = 0;
  [[nodiscard]] virtual std::shared_ptr<Block> clone() const = 0;
};