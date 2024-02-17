
#include "music_disc_stal_item.h"

MusicDiscStalItem::MusicDiscStalItem() = default;
MusicDiscStalItem::~MusicDiscStalItem() = default;

int MusicDiscStalItem::getID() const {
  return 1065;
}

std::shared_ptr<Item> MusicDiscStalItem::clone() const {
  return std::make_shared<MusicDiscStalItem>();
}
