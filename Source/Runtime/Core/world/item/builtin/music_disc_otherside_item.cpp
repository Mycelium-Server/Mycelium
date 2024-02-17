
#include "music_disc_otherside_item.h"

MusicDiscOthersideItem::MusicDiscOthersideItem() = default;
MusicDiscOthersideItem::~MusicDiscOthersideItem() = default;

int MusicDiscOthersideItem::getID() const {
  return 1070;
}

std::shared_ptr<Item> MusicDiscOthersideItem::clone() const {
  return std::make_shared<MusicDiscOthersideItem>();
}
