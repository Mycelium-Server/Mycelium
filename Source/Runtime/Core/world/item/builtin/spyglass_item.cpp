
#include "spyglass_item.h"

SpyglassItem::SpyglassItem() = default;
SpyglassItem::~SpyglassItem() = default;

int SpyglassItem::getID() const {
  return 838;
}

std::shared_ptr<Item> SpyglassItem::clone() const {
  return std::make_shared<SpyglassItem>();
}
