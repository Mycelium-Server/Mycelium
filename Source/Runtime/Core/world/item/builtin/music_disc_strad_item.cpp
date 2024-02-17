
#include "music_disc_strad_item.h"

MusicDiscStradItem::MusicDiscStradItem() = default;
MusicDiscStradItem::~MusicDiscStradItem() = default;

int MusicDiscStradItem::getID() const {
  return 1066;
}

std::shared_ptr<Item> MusicDiscStradItem::clone() const {
  return std::make_shared<MusicDiscStradItem>();
}
