#pragma once

#include "argument_parser.h"

class BrigadierLongParser : public ArgumentParser {
 public:
  BrigadierLongParser();
  ~BrigadierLongParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  std::optional<int64_t> min;
  std::optional<int64_t> max;
};