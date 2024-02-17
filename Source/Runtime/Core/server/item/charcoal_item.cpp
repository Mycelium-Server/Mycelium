
#include "charcoal_item.h"

CharcoalItem::CharcoalItem() = default;
CharcoalItem::~CharcoalItem() = default;

int CharcoalItem::getID() const {
  return 721;
}

std::shared_ptr<Item> CharcoalItem::clone() const {
  return std::make_shared<CharcoalItem>();
}
