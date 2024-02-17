
#include "glass_bottle_item.h"

GlassBottleItem::GlassBottleItem() = default;
GlassBottleItem::~GlassBottleItem() = default;

int GlassBottleItem::getID() const {
  return 903;
}

std::shared_ptr<Item> GlassBottleItem::clone() const {
  return std::make_shared<GlassBottleItem>();
}
