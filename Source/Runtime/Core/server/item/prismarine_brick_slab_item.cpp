
#include "prismarine_brick_slab_item.h"

#include "../block/prismarine_brick_slab_block.h"

PrismarineBrickSlabItem::PrismarineBrickSlabItem() = default;
PrismarineBrickSlabItem::~PrismarineBrickSlabItem() = default;

int PrismarineBrickSlabItem::getID() const {
  return 238;
}

std::shared_ptr<Item> PrismarineBrickSlabItem::clone() const {
  return std::make_shared<PrismarineBrickSlabItem>();
}

int PrismarineBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineBrickSlabBlock().getId();
}