
#include "debug_stick_item.h"

DebugStickItem::DebugStickItem() = default;
DebugStickItem::~DebugStickItem() = default;

int DebugStickItem::getID() const {
  return 1057;
}

std::shared_ptr<Item> DebugStickItem::clone() const {
  return std::make_shared<DebugStickItem>();
}
