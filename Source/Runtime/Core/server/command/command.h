#pragma once

#include <unordered_map>

#include "command_graph.h"
#include "root_command_node.h"

class ConnectionContext;

class Command {
 public:
  Command();
  virtual ~Command();

 public:
  virtual void addToGraph(CommandGraph*, RootCommandNode*) = 0;
  [[nodiscard]] virtual std::unordered_map<std::string, std::optional<std::string>> suggest(ConnectionContext*, const std::vector<std::string>&) = 0;
  virtual void execute(ConnectionContext*, const std::vector<std::string>&) = 0;
};