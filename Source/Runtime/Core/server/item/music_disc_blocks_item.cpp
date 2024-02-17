
#include "music_disc_blocks_item.h"

MusicDiscBlocksItem::MusicDiscBlocksItem() = default;
MusicDiscBlocksItem::~MusicDiscBlocksItem() = default;

int MusicDiscBlocksItem::getID() const {
  return 1060;
}

std::shared_ptr<Item> MusicDiscBlocksItem::clone() const {
  return std::make_shared<MusicDiscBlocksItem>();
}
