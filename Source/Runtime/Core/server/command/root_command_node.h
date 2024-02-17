#pragma once

#include "command_node.h"

class RootCommandNode : public CommandNode {
 public:
  RootCommandNode();
  ~RootCommandNode() override;

 public:
  void writeOptional(ByteBuffer&) const override;
  [[nodiscard]] NodeType getType() const override;
};