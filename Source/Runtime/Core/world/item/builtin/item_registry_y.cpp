
#include "item_registry.h"

#include "yellow_banner_item.h"
#include "yellow_bed_item.h"
#include "yellow_candle_item.h"
#include "yellow_carpet_item.h"
#include "yellow_concrete_item.h"
#include "yellow_concrete_powder_item.h"
#include "yellow_dye_item.h"
#include "yellow_glazed_terracotta_item.h"
#include "yellow_shulker_box_item.h"
#include "yellow_stained_glass_item.h"
#include "yellow_stained_glass_pane_item.h"
#include "yellow_terracotta_item.h"
#include "yellow_wool_item.h"

void ItemRegistry::generateY() {

  { // ID: 171
    registry[171] = std::make_shared<YellowWoolItem>();
  }

  { // ID: 383
    registry[383] = std::make_shared<YellowTerracottaItem>();
  }

  { // ID: 402
    registry[402] = std::make_shared<YellowCarpetItem>();
  }

  { // ID: 427
    registry[427] = std::make_shared<YellowStainedGlassItem>();
  }

  { // ID: 443
    registry[443] = std::make_shared<YellowStainedGlassPaneItem>();
  }

  { // ID: 479
    registry[479] = std::make_shared<YellowShulkerBoxItem>();
  }

  { // ID: 495
    registry[495] = std::make_shared<YellowGlazedTerracottaItem>();
  }

  { // ID: 511
    registry[511] = std::make_shared<YellowConcreteItem>();
  }

  { // ID: 527
    registry[527] = std::make_shared<YellowConcretePowderItem>();
  }

  { // ID: 853
    registry[853] = std::make_shared<YellowDyeItem>();
  }

  { // ID: 873
    registry[873] = std::make_shared<YellowBedItem>();
  }

  { // ID: 1029
    registry[1029] = std::make_shared<YellowBannerItem>();
  }

  { // ID: 1130
    registry[1130] = std::make_shared<YellowCandleItem>();
  }
}