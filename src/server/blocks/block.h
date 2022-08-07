#pragma once

class Block {
 public:
  Block();
  virtual ~Block();

 public:
  [[nodiscard]] virtual short getId() const = 0;
};