
#include "turtle_helmet_item.h"

TurtleHelmetItem::TurtleHelmetItem() = default;
TurtleHelmetItem::~TurtleHelmetItem() = default;

int TurtleHelmetItem::getID() const {
  return 714;
}

std::shared_ptr<Item> TurtleHelmetItem::clone() const {
  return std::make_shared<TurtleHelmetItem>();
}
