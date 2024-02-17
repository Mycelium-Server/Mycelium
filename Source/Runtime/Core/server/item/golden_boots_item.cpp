
#include "golden_boots_item.h"

GoldenBootsItem::GoldenBootsItem() = default;
GoldenBootsItem::~GoldenBootsItem() = default;

int GoldenBootsItem::getID() const {
  return 793;
}

std::shared_ptr<Item> GoldenBootsItem::clone() const {
  return std::make_shared<GoldenBootsItem>();
}
