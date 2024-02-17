
#include "command_graph.h"

CommandGraph::CommandGraph()
    : std::vector<CommandNode*>() {}

CommandGraph::~CommandGraph() = default;

void CommandGraph::addNode(CommandNode* node) {
  node->setGraph(this, (int) size());
  push_back(node);
}
