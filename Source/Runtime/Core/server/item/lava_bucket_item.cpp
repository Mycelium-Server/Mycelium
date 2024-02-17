
#include "lava_bucket_item.h"

LavaBucketItem::LavaBucketItem() = default;
LavaBucketItem::~LavaBucketItem() = default;

int LavaBucketItem::getID() const {
  return 815;
}

std::shared_ptr<Item> LavaBucketItem::clone() const {
  return std::make_shared<LavaBucketItem>();
}
