
#include "silverfish_spawn_egg_item.h"

SilverfishSpawnEggItem::SilverfishSpawnEggItem() = default;
SilverfishSpawnEggItem::~SilverfishSpawnEggItem() = default;

int SilverfishSpawnEggItem::getID() const {
  return 958;
}

std::shared_ptr<Item> SilverfishSpawnEggItem::clone() const {
  return std::make_shared<SilverfishSpawnEggItem>();
}
