
#include "melon_slice_item.h"

MelonSliceItem::MelonSliceItem() = default;
MelonSliceItem::~MelonSliceItem() = default;

int MelonSliceItem::getID() const {
  return 888;
}

std::shared_ptr<Item> MelonSliceItem::clone() const {
  return std::make_shared<MelonSliceItem>();
}
