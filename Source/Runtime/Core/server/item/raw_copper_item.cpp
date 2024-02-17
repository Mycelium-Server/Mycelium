
#include "raw_copper_item.h"

RawCopperItem::RawCopperItem() = default;
RawCopperItem::~RawCopperItem() = default;

int RawCopperItem::getID() const {
  return 729;
}

std::shared_ptr<Item> RawCopperItem::clone() const {
  return std::make_shared<RawCopperItem>();
}
