
#include "ghast_spawn_egg_item.h"

GhastSpawnEggItem::GhastSpawnEggItem() = default;
GhastSpawnEggItem::~GhastSpawnEggItem() = default;

int GhastSpawnEggItem::getID() const {
  return 932;
}

std::shared_ptr<Item> GhastSpawnEggItem::clone() const {
  return std::make_shared<GhastSpawnEggItem>();
}
