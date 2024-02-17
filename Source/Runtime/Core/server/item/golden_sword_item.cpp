
#include "golden_sword_item.h"

GoldenSwordItem::GoldenSwordItem() = default;
GoldenSwordItem::~GoldenSwordItem() = default;

int GoldenSwordItem::getID() const {
  return 745;
}

std::shared_ptr<Item> GoldenSwordItem::clone() const {
  return std::make_shared<GoldenSwordItem>();
}
