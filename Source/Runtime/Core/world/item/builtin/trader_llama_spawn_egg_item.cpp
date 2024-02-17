
#include "trader_llama_spawn_egg_item.h"

TraderLlamaSpawnEggItem::TraderLlamaSpawnEggItem() = default;
TraderLlamaSpawnEggItem::~TraderLlamaSpawnEggItem() = default;

int TraderLlamaSpawnEggItem::getID() const {
  return 967;
}

std::shared_ptr<Item> TraderLlamaSpawnEggItem::clone() const {
  return std::make_shared<TraderLlamaSpawnEggItem>();
}
