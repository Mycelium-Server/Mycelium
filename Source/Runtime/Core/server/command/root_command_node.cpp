
#include "root_command_node.h"

RootCommandNode::RootCommandNode() = default;
RootCommandNode::~RootCommandNode() = default;

void RootCommandNode::writeOptional(ByteBuffer&) const {}

CommandNode::NodeType RootCommandNode::getType() const {
  return CommandNode::ROOT;
}
