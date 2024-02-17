
#include "glistering_melon_slice_item.h"

GlisteringMelonSliceItem::GlisteringMelonSliceItem() = default;
GlisteringMelonSliceItem::~GlisteringMelonSliceItem() = default;

int GlisteringMelonSliceItem::getID() const {
  return 911;
}

std::shared_ptr<Item> GlisteringMelonSliceItem::clone() const {
  return std::make_shared<GlisteringMelonSliceItem>();
}
