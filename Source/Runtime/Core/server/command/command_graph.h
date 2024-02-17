#pragma once

#include "command_node.h"

class CommandGraph : public std::vector<CommandNode*> {
 public:
  CommandGraph();
  ~CommandGraph();

 public:
  void addNode(CommandNode*);
};