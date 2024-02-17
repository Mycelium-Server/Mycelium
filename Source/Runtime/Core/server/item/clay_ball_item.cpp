
#include "clay_ball_item.h"

ClayBallItem::ClayBallItem() = default;
ClayBallItem::~ClayBallItem() = default;

int ClayBallItem::getID() const {
  return 827;
}

std::shared_ptr<Item> ClayBallItem::clone() const {
  return std::make_shared<ClayBallItem>();
}
