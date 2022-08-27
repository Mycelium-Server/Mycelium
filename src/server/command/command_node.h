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

#include "../../ByteBuffer.h"

class CommandGraph;

namespace CommandSuggestionType {
  const std::string ASK_SERVER = "minecraft:ask_server";
  const std::string ALL_RECIPES = "minecraft:all_recipes";
  const std::string AVAILABLE_SOUNDS = "minecraft:available_sounds";
  const std::string AVAILABLE_BIOMES = "minecraft:available_biomes";
  const std::string SUMMONABLE_ENTITIES = "minecraft:summonable_entities";
}// namespace CommandSuggestionType

class CommandNode {
 public:
  enum NodeType {
    ROOT = 0,
    LITERAL = 1,
    ARGUMENT = 2,
  };

 public:
  CommandNode();
  virtual ~CommandNode();

 public:
  [[nodiscard]] unsigned char getFlags() const;
  void write(ByteBuffer&) const;
  virtual void writeOptional(ByteBuffer&) const = 0;
  [[nodiscard]] virtual NodeType getType() const = 0;
  void setGraph(CommandGraph*, int);
  [[nodiscard]] CommandGraph* getGraph() const;

 public:
  std::vector<CommandNode*> children;
  std::optional<CommandNode*> redirect;
  std::optional<std::string> suggestionType;
  bool isExecutable = false;

 private:
  CommandGraph* graph = nullptr;
  int index = -1;
};