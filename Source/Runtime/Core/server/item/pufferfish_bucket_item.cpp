
#include "pufferfish_bucket_item.h"

PufferfishBucketItem::PufferfishBucketItem() = default;
PufferfishBucketItem::~PufferfishBucketItem() = default;

int PufferfishBucketItem::getID() const {
  return 820;
}

std::shared_ptr<Item> PufferfishBucketItem::clone() const {
  return std::make_shared<PufferfishBucketItem>();
}
