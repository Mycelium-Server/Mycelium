#pragma once

#include "../../../network/byte_buffer.h"

class ArgumentParser {
 public:
  ArgumentParser();
  virtual ~ArgumentParser();

 public:
  [[nodiscard]] virtual int getID() const = 0;
  [[nodiscard]] virtual std::string getIdentifier() const = 0;
  virtual void writeProperties(ByteBuffer&) const = 0;

};