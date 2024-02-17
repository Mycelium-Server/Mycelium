
#include "glow_berries_item.h"

GlowBerriesItem::GlowBerriesItem() = default;
GlowBerriesItem::~GlowBerriesItem() = default;

int GlowBerriesItem::getID() const {
  return 1101;
}

std::shared_ptr<Item> GlowBerriesItem::clone() const {
  return std::make_shared<GlowBerriesItem>();
}
