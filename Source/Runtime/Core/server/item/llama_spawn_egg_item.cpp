
#include "llama_spawn_egg_item.h"

LlamaSpawnEggItem::LlamaSpawnEggItem() = default;
LlamaSpawnEggItem::~LlamaSpawnEggItem() = default;

int LlamaSpawnEggItem::getID() const {
  return 939;
}

std::shared_ptr<Item> LlamaSpawnEggItem::clone() const {
  return std::make_shared<LlamaSpawnEggItem>();
}
