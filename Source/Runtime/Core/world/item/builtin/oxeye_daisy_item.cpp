
#include "oxeye_daisy_item.h"

#include "../../block/builtin/oxeye_daisy_block.h"

OxeyeDaisyItem::OxeyeDaisyItem() = default;
OxeyeDaisyItem::~OxeyeDaisyItem() = default;

int OxeyeDaisyItem::getID() const {
  return 192;
}

std::shared_ptr<Item> OxeyeDaisyItem::clone() const {
  return std::make_shared<OxeyeDaisyItem>();
}

int OxeyeDaisyItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OxeyeDaisyBlock().getId();
}