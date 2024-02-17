
#include "golden_hoe_item.h"

GoldenHoeItem::GoldenHoeItem() = default;
GoldenHoeItem::~GoldenHoeItem() = default;

int GoldenHoeItem::getID() const {
  return 749;
}

std::shared_ptr<Item> GoldenHoeItem::clone() const {
  return std::make_shared<GoldenHoeItem>();
}
