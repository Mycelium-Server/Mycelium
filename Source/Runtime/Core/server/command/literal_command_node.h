#pragma once

#include "command_node.h"

class LiteralCommandNode : public CommandNode {
 public:
  LiteralCommandNode();
  explicit LiteralCommandNode(std::string );
  ~LiteralCommandNode() override;

 public:
  void writeOptional(ByteBuffer&) const override;
  [[nodiscard]] NodeType getType() const override;

 public:
  std::string name;
};