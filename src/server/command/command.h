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