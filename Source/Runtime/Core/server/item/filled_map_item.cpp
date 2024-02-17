
#include "filled_map_item.h"

FilledMapItem::FilledMapItem() = default;
FilledMapItem::~FilledMapItem() = default;

int FilledMapItem::getID() const {
  return 886;
}

std::shared_ptr<Item> FilledMapItem::clone() const {
  return std::make_shared<FilledMapItem>();
}
