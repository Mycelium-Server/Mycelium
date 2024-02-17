
#include "spectral_arrow_item.h"

SpectralArrowItem::SpectralArrowItem() = default;
SpectralArrowItem::~SpectralArrowItem() = default;

int SpectralArrowItem::getID() const {
  return 1049;
}

std::shared_ptr<Item> SpectralArrowItem::clone() const {
  return std::make_shared<SpectralArrowItem>();
}
