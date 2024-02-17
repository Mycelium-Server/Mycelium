
#include "string_item.h"

#include "../../block/builtin/tripwire_block.h"

StringItem::StringItem() = default;
StringItem::~StringItem() = default;

int StringItem::getID() const {
  return 768;
}

std::shared_ptr<Item> StringItem::clone() const {
  return std::make_shared<StringItem>();
}

int StringItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TripwireBlock().getId();
}