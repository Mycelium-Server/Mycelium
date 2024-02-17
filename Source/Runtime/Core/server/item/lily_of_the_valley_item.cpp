
#include "lily_of_the_valley_item.h"

#include "../block/lily_of_the_valley_block.h"

LilyOfTheValleyItem::LilyOfTheValleyItem() = default;
LilyOfTheValleyItem::~LilyOfTheValleyItem() = default;

int LilyOfTheValleyItem::getID() const {
  return 194;
}

std::shared_ptr<Item> LilyOfTheValleyItem::clone() const {
  return std::make_shared<LilyOfTheValleyItem>();
}

int LilyOfTheValleyItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LilyOfTheValleyBlock().getId();
}