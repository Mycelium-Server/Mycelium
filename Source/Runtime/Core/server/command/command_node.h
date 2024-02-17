#pragma once

#include "../../byte_buffer.h"

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
  [[nodiscard]] uint8_t getFlags() const;
  void write(ByteBuffer&) const;
  virtual void writeOptional(ByteBuffer&) const = 0;
  [[nodiscard]] virtual NodeType getType() const = 0;
  void setGraph(CommandGraph*, int);
  [[nodiscard]] CommandGraph* getGraph() const;
  [[nodiscard]] int getIndex() const;

 public:
  std::vector<CommandNode*> children;
  std::optional<CommandNode*> redirect;
  std::optional<std::string> suggestionType;
  bool isExecutable = false;

 private:
  CommandGraph* graph = nullptr;
  int index = -1;
};