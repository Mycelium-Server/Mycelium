
#include "dried_kelp_block_item.h"

#include "../../block/builtin/dried_kelp_block_block.h"

DriedKelpBlockItem::DriedKelpBlockItem() = default;
DriedKelpBlockItem::~DriedKelpBlockItem() = default;

int DriedKelpBlockItem::getID() const {
  return 828;
}

std::shared_ptr<Item> DriedKelpBlockItem::clone() const {
  return std::make_shared<DriedKelpBlockItem>();
}

int DriedKelpBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DriedKelpBlockBlock().getId();
}
