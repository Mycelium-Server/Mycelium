
#include "muddy_mangrove_roots_item.h"

#include "../block/muddy_mangrove_roots_block.h"

MuddyMangroveRootsItem::MuddyMangroveRootsItem() = default;
MuddyMangroveRootsItem::~MuddyMangroveRootsItem() = default;

int MuddyMangroveRootsItem::getID() const {
  return 112;
}

std::shared_ptr<Item> MuddyMangroveRootsItem::clone() const {
  return std::make_shared<MuddyMangroveRootsItem>();
}

int MuddyMangroveRootsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MuddyMangroveRootsBlock().getId();
}