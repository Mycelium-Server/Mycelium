
#include "music_disc_far_item.h"

MusicDiscFarItem::MusicDiscFarItem() = default;
MusicDiscFarItem::~MusicDiscFarItem() = default;

int MusicDiscFarItem::getID() const {
  return 1062;
}

std::shared_ptr<Item> MusicDiscFarItem::clone() const {
  return std::make_shared<MusicDiscFarItem>();
}
