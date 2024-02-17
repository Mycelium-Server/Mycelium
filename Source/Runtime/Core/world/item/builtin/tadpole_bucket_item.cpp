
#include "tadpole_bucket_item.h"

TadpoleBucketItem::TadpoleBucketItem() = default;
TadpoleBucketItem::~TadpoleBucketItem() = default;

int TadpoleBucketItem::getID() const {
  return 825;
}

std::shared_ptr<Item> TadpoleBucketItem::clone() const {
  return std::make_shared<TadpoleBucketItem>();
}
