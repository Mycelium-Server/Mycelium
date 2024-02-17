
#include "music_disc_wait_item.h"

MusicDiscWaitItem::MusicDiscWaitItem() = default;
MusicDiscWaitItem::~MusicDiscWaitItem() = default;

int MusicDiscWaitItem::getID() const {
  return 1069;
}

std::shared_ptr<Item> MusicDiscWaitItem::clone() const {
  return std::make_shared<MusicDiscWaitItem>();
}
