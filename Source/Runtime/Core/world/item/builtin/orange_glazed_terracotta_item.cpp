
#include "orange_glazed_terracotta_item.h"

#include "../../block/builtin/orange_glazed_terracotta_block.h"

OrangeGlazedTerracottaItem::OrangeGlazedTerracottaItem() = default;
OrangeGlazedTerracottaItem::~OrangeGlazedTerracottaItem() = default;

int OrangeGlazedTerracottaItem::getID() const {
  return 492;
}

std::shared_ptr<Item> OrangeGlazedTerracottaItem::clone() const {
  return std::make_shared<OrangeGlazedTerracottaItem>();
}

int OrangeGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeGlazedTerracottaBlock().getId();
}