
#include "endermite_spawn_egg_item.h"

EndermiteSpawnEggItem::EndermiteSpawnEggItem() = default;
EndermiteSpawnEggItem::~EndermiteSpawnEggItem() = default;

int EndermiteSpawnEggItem::getID() const {
  return 928;
}

std::shared_ptr<Item> EndermiteSpawnEggItem::clone() const {
  return std::make_shared<EndermiteSpawnEggItem>();
}
