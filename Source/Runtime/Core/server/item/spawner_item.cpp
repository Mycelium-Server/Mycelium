
#include "spawner_item.h"

#include "../block/spawner_block.h"

SpawnerItem::SpawnerItem() = default;
SpawnerItem::~SpawnerItem() = default;

int SpawnerItem::getID() const {
  return 255;
}

std::shared_ptr<Item> SpawnerItem::clone() const {
  return std::make_shared<SpawnerItem>();
}

int SpawnerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpawnerBlock().getId();
}