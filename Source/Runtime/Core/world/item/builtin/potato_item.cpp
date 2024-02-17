
#include "potato_item.h"

PotatoItem::PotatoItem() = default;
PotatoItem::~PotatoItem() = default;

int PotatoItem::getID() const {
  return 991;
}

std::shared_ptr<Item> PotatoItem::clone() const {
  return std::make_shared<PotatoItem>();
}
