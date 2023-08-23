/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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
#include "../../../json.hpp"
#include "../../../protocol/clientbound_disconnect.h"
#include "../../../protocol/clientbound_system_message.h"
#include "../argument_command_node.h"
#include "../literal_command_node.h"
#include "../parser/entity.h"
#include "../parser/message_parser.h"

KickCommand::KickCommand() = default;
KickCommand::~KickCommand() = default;

void KickCommand::addToGraph(CommandGraph* graph, RootCommandNode* root) {
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

std::unordered_map<std::string, std::optional<std::string>> KickCommand::suggest(ConnectionContext* ctx, const std::vector<std::string>& args) {
  std::unordered_map<std::string, std::optional<std::string>> players;
  for (auto* player: ctx->gameServer->getPlayers()) {
    players[player->name] = {};
  }
  return players;
}

void KickCommand::execute(ConnectionContext* ctx, const std::vector<std::string>& args) {
  if (args.empty()) {
    return;
  }

  auto* player = ctx->gameServer->getPlayer(args[0]);// TODO: getPlayers(targetSelector)
  if (player == nullptr) {
    auto* msg = new ClientboundSystemMessage;
    nlohmann::json json;
    json["text"] = "Can't find player " + args[0];
    msg->message = nlohmann::to_string(json);
    ctx->write(msg);
    delete msg;
    return;
  }

  nlohmann::json kickMessage;
  if (args.size() > 1) {
    kickMessage["text"] = args[1];
    for (int i = 2; i < args.size(); i++) {
      kickMessage["text"] = (std::string) kickMessage["text"] + " " + args[i];
    }
  } else {
    kickMessage["text"] = "Kicked by an operator";
  }

  ctx->gameServer->disconnectJson(player, kickMessage);

  kickMessage["text"] = "[" + ctx->playerData.name + ": Kicked " + player->name + ": " + (std::string) kickMessage["text"] + "]";
  kickMessage["color"] = "gray";
  kickMessage["italic"] = true;
  std::cout << (std::string) kickMessage["text"] << std::endl;
  auto* info = new ClientboundSystemMessage; // TODO: Gamerules
  info->message = nlohmann::to_string(kickMessage);
  for (auto* p: ctx->gameServer->getPlayers()) {
    p->entity->connection->write(info);
  }
  delete info;
}
