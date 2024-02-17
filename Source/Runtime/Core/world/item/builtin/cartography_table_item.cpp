
#include "cartography_table_item.h"

#include "../../block/builtin/cartography_table_block.h"

CartographyTableItem::CartographyTableItem() = default;
CartographyTableItem::~CartographyTableItem() = default;

int CartographyTableItem::getID() const {
  return 1092;
}

std::shared_ptr<Item> CartographyTableItem::clone() const {
  return std::make_shared<CartographyTableItem>();
}

int CartographyTableItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CartographyTableBlock().getId();
}
