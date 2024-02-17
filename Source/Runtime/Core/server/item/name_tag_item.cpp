
#include "name_tag_item.h"

NameTagItem::NameTagItem() = default;
NameTagItem::~NameTagItem() = default;

int NameTagItem::getID() const {
  return 1021;
}

std::shared_ptr<Item> NameTagItem::clone() const {
  return std::make_shared<NameTagItem>();
}
