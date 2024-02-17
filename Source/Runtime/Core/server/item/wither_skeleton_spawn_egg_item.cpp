
#include "wither_skeleton_spawn_egg_item.h"

WitherSkeletonSpawnEggItem::WitherSkeletonSpawnEggItem() = default;
WitherSkeletonSpawnEggItem::~WitherSkeletonSpawnEggItem() = default;

int WitherSkeletonSpawnEggItem::getID() const {
  return 976;
}

std::shared_ptr<Item> WitherSkeletonSpawnEggItem::clone() const {
  return std::make_shared<WitherSkeletonSpawnEggItem>();
}
