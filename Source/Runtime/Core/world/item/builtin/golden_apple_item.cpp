
#include "golden_apple_item.h"

GoldenAppleItem::GoldenAppleItem() = default;
GoldenAppleItem::~GoldenAppleItem() = default;

int GoldenAppleItem::getID() const {
  return 802;
}

std::shared_ptr<Item> GoldenAppleItem::clone() const {
  return std::make_shared<GoldenAppleItem>();
}
