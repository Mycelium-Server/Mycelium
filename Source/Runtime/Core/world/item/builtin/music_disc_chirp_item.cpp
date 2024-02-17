
#include "music_disc_chirp_item.h"

MusicDiscChirpItem::MusicDiscChirpItem() = default;
MusicDiscChirpItem::~MusicDiscChirpItem() = default;

int MusicDiscChirpItem::getID() const {
  return 1061;
}

std::shared_ptr<Item> MusicDiscChirpItem::clone() const {
  return std::make_shared<MusicDiscChirpItem>();
}
