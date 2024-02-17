
#include "repeating_command_block_item.h"

#include "../block/repeating_command_block_block.h"

RepeatingCommandBlockItem::RepeatingCommandBlockItem() = default;
RepeatingCommandBlockItem::~RepeatingCommandBlockItem() = default;

int RepeatingCommandBlockItem::getID() const {
  return 466;
}

std::shared_ptr<Item> RepeatingCommandBlockItem::clone() const {
  return std::make_shared<RepeatingCommandBlockItem>();
}

int RepeatingCommandBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RepeatingCommandBlockBlock().getId();
}
