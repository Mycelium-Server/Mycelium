#pragma once

#include "command_node.h"
#include "parser/argument_parser.h"

class ArgumentCommandNode : public CommandNode {
 public:
  ArgumentCommandNode();
  ArgumentCommandNode(std::string, ArgumentParser*);
  ~ArgumentCommandNode() override;

 public:
  void writeOptional(ByteBuffer&) const override;
  [[nodiscard]] NodeType getType() const override;

 public:
  std::string name;
  ArgumentParser* parser = nullptr;
};