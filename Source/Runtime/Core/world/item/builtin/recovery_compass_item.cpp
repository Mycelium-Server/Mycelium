
#include "recovery_compass_item.h"

RecoveryCompassItem::RecoveryCompassItem() = default;
RecoveryCompassItem::~RecoveryCompassItem() = default;

int RecoveryCompassItem::getID() const {
  return 834;
}

std::shared_ptr<Item> RecoveryCompassItem::clone() const {
  return std::make_shared<RecoveryCompassItem>();
}
