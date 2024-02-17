
#include "bundle_item.h"

BundleItem::BundleItem() = default;
BundleItem::~BundleItem() = default;

int BundleItem::getID() const {
  return 835;
}

std::shared_ptr<Item> BundleItem::clone() const {
  return std::make_shared<BundleItem>();
}
