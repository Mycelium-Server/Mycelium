
#include "item_registry.h"

#include "quartz_item.h"
#include "quartz_block_item.h"
#include "quartz_bricks_item.h"
#include "quartz_pillar_item.h"
#include "quartz_slab_item.h"
#include "quartz_stairs_item.h"

void ItemRegistry::generateQ() {

  { // ID: 233
    registry[233] = std::make_shared<QuartzSlabItem>();
  }

  { // ID: 375
    registry[375] = std::make_shared<QuartzBlockItem>();
  }

  { // ID: 376
    registry[376] = std::make_shared<QuartzBricksItem>();
  }

  { // ID: 377
    registry[377] = std::make_shared<QuartzPillarItem>();
  }

  { // ID: 378
    registry[378] = std::make_shared<QuartzStairsItem>();
  }

  { // ID: 725
    registry[725] = std::make_shared<QuartzItem>();
  }
}