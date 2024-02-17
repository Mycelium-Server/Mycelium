
#include "disc_fragment_5_item.h"

DiscFragment5Item::DiscFragment5Item() = default;
DiscFragment5Item::~DiscFragment5Item() = default;

int DiscFragment5Item::getID() const {
  return 1073;
}

std::shared_ptr<Item> DiscFragment5Item::clone() const {
  return std::make_shared<DiscFragment5Item>();
}
