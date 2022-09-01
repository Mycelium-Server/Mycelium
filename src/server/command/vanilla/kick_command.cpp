/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "kick_command.h"

#include "../../../connection_context.h"
#include "../argument_command_node.h"
#include "../literal_command_node.h"
#include "../parser/entity.h"
#include "../parser/message_parser.h"

KickCommand::KickCommand() = default;
KickCommand::~KickCommand() = default;

void KickCommand::addToGraph(CommandGraph* graph, RootCommandNode* root) const {
  CommandNode* kick = new LiteralCommandNode("kick");
  kick->isExecutable = false;

  graph->addNode(kick);
  root->children.push_back(kick);

  CommandNode* targets = new ArgumentCommandNode("targets", new EntityParser());
  targets->suggestionType = CommandSuggestionType::ASK_SERVER;
  targets->isExecutable = true;

  graph->addNode(targets);
  kick->children.push_back(targets);

  CommandNode* reason = new ArgumentCommandNode("reason", new MessageParser());
  reason->isExecutable = true;

  graph->addNode(reason);
  targets->children.push_back(reason);
}

std::unordered_map<std::string, std::optional<std::string>> KickCommand::suggest(ConnectionContext* ctx, const std::vector<std::string>& args) const {
  std::unordered_map<std::string, std::optional<std::string>> players;
  for (auto* player: ctx->gameServer->getPlayers()) {
    players[player->name] = {};
  }
  return players;
}
