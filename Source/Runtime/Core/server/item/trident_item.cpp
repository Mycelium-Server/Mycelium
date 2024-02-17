
#include "trident_item.h"

TridentItem::TridentItem() = default;
TridentItem::~TridentItem() = default;

int TridentItem::getID() const {
  return 1074;
}

std::shared_ptr<Item> TridentItem::clone() const {
  return std::make_shared<TridentItem>();
}
