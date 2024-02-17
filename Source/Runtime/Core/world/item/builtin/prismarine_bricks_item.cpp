
#include "prismarine_bricks_item.h"

#include "../../block/builtin/prismarine_bricks_block.h"

PrismarineBricksItem::PrismarineBricksItem() = default;
PrismarineBricksItem::~PrismarineBricksItem() = default;

int PrismarineBricksItem::getID() const {
  return 456;
}

std::shared_ptr<Item> PrismarineBricksItem::clone() const {
  return std::make_shared<PrismarineBricksItem>();
}

int PrismarineBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineBricksBlock().getId();
}