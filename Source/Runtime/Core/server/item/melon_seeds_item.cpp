
#include "melon_seeds_item.h"

MelonSeedsItem::MelonSeedsItem() = default;
MelonSeedsItem::~MelonSeedsItem() = default;

int MelonSeedsItem::getID() const {
  return 891;
}

std::shared_ptr<Item> MelonSeedsItem::clone() const {
  return std::make_shared<MelonSeedsItem>();
}
