#pragma once

#include "../command.h"

class KickCommand : public Command {
 public:
  KickCommand();
  ~KickCommand() override;

 public:
  void addToGraph(CommandGraph*, RootCommandNode*) override;
  [[nodiscard]] std::unordered_map<std::string, std::optional<std::string>> suggest(ConnectionContext*, const std::vector<std::string>&) override;
  void execute(ConnectionContext*, const std::vector<std::string>&) override;
};