
#include "command_node.h"

#include "command_graph.h"

CommandNode::CommandNode() = default;
CommandNode::~CommandNode() = default;

uint8_t CommandNode::getFlags() const {
  return ((uint8_t) getType() & 0x03) |
         (isExecutable << 2) |
         (redirect.has_value() << 3) |
         (suggestionType.has_value() << 4);
}

void CommandNode::write(ByteBuffer& buf) const {
  buf.writeByte((uint8_t) getFlags());
  buf.writeVarInt((int) children.size());
  for (auto& child: children) {
    if (child->graph != graph) {
      continue;
    }

    buf.writeVarInt(child->index);
  }
  if (redirect.has_value()) {
    if (redirect.value()->graph == graph) {
      buf.writeVarInt(redirect.value()->index);
    }
  }

  writeOptional(buf);

  if (suggestionType.has_value()) {
    buf.writeString(suggestionType.value());
  }
}

void CommandNode::setGraph(CommandGraph* g, int i) {
  graph = g;
  index = i;
}

CommandGraph* CommandNode::getGraph() const {
  return graph;
}

int CommandNode::getIndex() const {
  return index;
}
