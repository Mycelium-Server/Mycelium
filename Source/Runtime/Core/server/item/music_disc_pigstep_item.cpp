
#include "music_disc_pigstep_item.h"

MusicDiscPigstepItem::MusicDiscPigstepItem() = default;
MusicDiscPigstepItem::~MusicDiscPigstepItem() = default;

int MusicDiscPigstepItem::getID() const {
  return 1072;
}

std::shared_ptr<Item> MusicDiscPigstepItem::clone() const {
  return std::make_shared<MusicDiscPigstepItem>();
}
