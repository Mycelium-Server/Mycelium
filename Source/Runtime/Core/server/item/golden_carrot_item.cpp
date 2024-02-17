
#include "golden_carrot_item.h"

GoldenCarrotItem::GoldenCarrotItem() = default;
GoldenCarrotItem::~GoldenCarrotItem() = default;

int GoldenCarrotItem::getID() const {
  return 995;
}

std::shared_ptr<Item> GoldenCarrotItem::clone() const {
  return std::make_shared<GoldenCarrotItem>();
}
