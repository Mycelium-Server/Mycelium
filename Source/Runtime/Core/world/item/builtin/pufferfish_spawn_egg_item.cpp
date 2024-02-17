
#include "pufferfish_spawn_egg_item.h"

PufferfishSpawnEggItem::PufferfishSpawnEggItem() = default;
PufferfishSpawnEggItem::~PufferfishSpawnEggItem() = default;

int PufferfishSpawnEggItem::getID() const {
  return 952;
}

std::shared_ptr<Item> PufferfishSpawnEggItem::clone() const {
  return std::make_shared<PufferfishSpawnEggItem>();
}
