
#include "tadpole_spawn_egg_item.h"

TadpoleSpawnEggItem::TadpoleSpawnEggItem() = default;
TadpoleSpawnEggItem::~TadpoleSpawnEggItem() = default;

int TadpoleSpawnEggItem::getID() const {
  return 966;
}

std::shared_ptr<Item> TadpoleSpawnEggItem::clone() const {
  return std::make_shared<TadpoleSpawnEggItem>();
}
