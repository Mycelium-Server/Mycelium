
#include "panda_spawn_egg_item.h"

PandaSpawnEggItem::PandaSpawnEggItem() = default;
PandaSpawnEggItem::~PandaSpawnEggItem() = default;

int PandaSpawnEggItem::getID() const {
  return 944;
}

std::shared_ptr<Item> PandaSpawnEggItem::clone() const {
  return std::make_shared<PandaSpawnEggItem>();
}
