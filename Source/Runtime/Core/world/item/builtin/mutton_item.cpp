
#include "mutton_item.h"

MuttonItem::MuttonItem() = default;
MuttonItem::~MuttonItem() = default;

int MuttonItem::getID() const {
  return 1023;
}

std::shared_ptr<Item> MuttonItem::clone() const {
  return std::make_shared<MuttonItem>();
}
