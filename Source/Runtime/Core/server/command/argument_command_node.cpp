
#include "argument_command_node.h"

#include <utility>

ArgumentCommandNode::ArgumentCommandNode() = default;
ArgumentCommandNode::~ArgumentCommandNode() {
  delete parser;
}

ArgumentCommandNode::ArgumentCommandNode(std::string name, ArgumentParser* parser)
    : name(std::move(name)),
      parser(parser) {}

void ArgumentCommandNode::writeOptional(ByteBuffer& buf) const {
  buf.writeString(name);
  buf.writeVarInt(parser->getID());
  parser->writeProperties(buf);
}

CommandNode::NodeType ArgumentCommandNode::getType() const {
  return CommandNode::ARGUMENT;
}
