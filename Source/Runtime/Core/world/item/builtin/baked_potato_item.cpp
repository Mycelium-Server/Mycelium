
#include "baked_potato_item.h"

BakedPotatoItem::BakedPotatoItem() = default;
BakedPotatoItem::~BakedPotatoItem() = default;

int BakedPotatoItem::getID() const {
  return 992;
}

std::shared_ptr<Item> BakedPotatoItem::clone() const {
  return std::make_shared<BakedPotatoItem>();
}
