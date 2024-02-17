
#include "ocelot_spawn_egg_item.h"

OcelotSpawnEggItem::OcelotSpawnEggItem() = default;
OcelotSpawnEggItem::~OcelotSpawnEggItem() = default;

int OcelotSpawnEggItem::getID() const {
  return 943;
}

std::shared_ptr<Item> OcelotSpawnEggItem::clone() const {
  return std::make_shared<OcelotSpawnEggItem>();
}
