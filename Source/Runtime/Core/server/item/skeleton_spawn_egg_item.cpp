
#include "skeleton_spawn_egg_item.h"

SkeletonSpawnEggItem::SkeletonSpawnEggItem() = default;
SkeletonSpawnEggItem::~SkeletonSpawnEggItem() = default;

int SkeletonSpawnEggItem::getID() const {
  return 959;
}

std::shared_ptr<Item> SkeletonSpawnEggItem::clone() const {
  return std::make_shared<SkeletonSpawnEggItem>();
}
