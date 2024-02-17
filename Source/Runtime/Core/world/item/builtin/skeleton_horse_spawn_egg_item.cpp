
#include "skeleton_horse_spawn_egg_item.h"

SkeletonHorseSpawnEggItem::SkeletonHorseSpawnEggItem() = default;
SkeletonHorseSpawnEggItem::~SkeletonHorseSpawnEggItem() = default;

int SkeletonHorseSpawnEggItem::getID() const {
  return 960;
}

std::shared_ptr<Item> SkeletonHorseSpawnEggItem::clone() const {
  return std::make_shared<SkeletonHorseSpawnEggItem>();
}
