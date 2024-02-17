
#include "music_disc_ward_item.h"

MusicDiscWardItem::MusicDiscWardItem() = default;
MusicDiscWardItem::~MusicDiscWardItem() = default;

int MusicDiscWardItem::getID() const {
  return 1067;
}

std::shared_ptr<Item> MusicDiscWardItem::clone() const {
  return std::make_shared<MusicDiscWardItem>();
}
