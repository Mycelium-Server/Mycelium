
#include "literal_command_node.h"

#include <utility>

LiteralCommandNode::LiteralCommandNode() = default;
LiteralCommandNode::~LiteralCommandNode() = default;

LiteralCommandNode::LiteralCommandNode(std::string name)
    : name(std::move(name)) {}

void LiteralCommandNode::writeOptional(ByteBuffer& buf) const {
  buf.writeString(name);
}

CommandNode::NodeType LiteralCommandNode::getType() const {
  return CommandNode::LITERAL;
}
