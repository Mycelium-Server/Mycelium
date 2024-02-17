
#include "item_registry.h"

#include "jack_o_lantern_item.h"
#include "jigsaw_item.h"
#include "jukebox_item.h"
#include "jungle_boat_item.h"
#include "jungle_button_item.h"
#include "jungle_chest_boat_item.h"
#include "jungle_door_item.h"
#include "jungle_fence_item.h"
#include "jungle_fence_gate_item.h"
#include "jungle_leaves_item.h"
#include "jungle_log_item.h"
#include "jungle_planks_item.h"
#include "jungle_pressure_plate_item.h"
#include "jungle_sapling_item.h"
#include "jungle_sign_item.h"
#include "jungle_slab_item.h"
#include "jungle_stairs_item.h"
#include "jungle_trapdoor_item.h"
#include "jungle_wood_item.h"

void ItemRegistry::generateJ() {

  { // ID: 26
    registry[26] = std::make_shared<JunglePlanksItem>();
  }

  { // ID: 35
    registry[35] = std::make_shared<JungleSaplingItem>();
  }

  { // ID: 107
    registry[107] = std::make_shared<JungleLogItem>();
  }

  { // ID: 136
    registry[136] = std::make_shared<JungleWoodItem>();
  }

  { // ID: 145
    registry[145] = std::make_shared<JungleLeavesItem>();
  }

  { // ID: 217
    registry[217] = std::make_shared<JungleSlabItem>();
  }

  { // ID: 267
    registry[267] = std::make_shared<JukeboxItem>();
  }

  { // ID: 271
    registry[271] = std::make_shared<JungleFenceItem>();
  }

  { // ID: 279
    registry[279] = std::make_shared<JackOLanternItem>();
  }

  { // ID: 341
    registry[341] = std::make_shared<JungleStairsItem>();
  }

  { // ID: 637
    registry[637] = std::make_shared<JungleButtonItem>();
  }

  { // ID: 650
    registry[650] = std::make_shared<JunglePressurePlateItem>();
  }

  { // ID: 660
    registry[660] = std::make_shared<JungleDoorItem>();
  }

  { // ID: 670
    registry[670] = std::make_shared<JungleTrapdoorItem>();
  }

  { // ID: 679
    registry[679] = std::make_shared<JungleFenceGateItem>();
  }

  { // ID: 704
    registry[704] = std::make_shared<JungleBoatItem>();
  }

  { // ID: 705
    registry[705] = std::make_shared<JungleChestBoatItem>();
  }

  { // ID: 713
    registry[713] = std::make_shared<JigsawItem>();
  }

  { // ID: 807
    registry[807] = std::make_shared<JungleSignItem>();
  }
}