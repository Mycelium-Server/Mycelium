
#include "item_registry.h"

#include "name_tag_item.h"
#include "nautilus_shell_item.h"
#include "nether_brick_item.h"
#include "nether_brick_fence_item.h"
#include "nether_brick_slab_item.h"
#include "nether_brick_stairs_item.h"
#include "nether_brick_wall_item.h"
#include "nether_bricks_item.h"
#include "nether_gold_ore_item.h"
#include "nether_quartz_ore_item.h"
#include "nether_sprouts_item.h"
#include "nether_star_item.h"
#include "nether_wart_item.h"
#include "nether_wart_block_item.h"
#include "netherite_axe_item.h"
#include "netherite_block_item.h"
#include "netherite_boots_item.h"
#include "netherite_chestplate_item.h"
#include "netherite_helmet_item.h"
#include "netherite_hoe_item.h"
#include "netherite_ingot_item.h"
#include "netherite_leggings_item.h"
#include "netherite_pickaxe_item.h"
#include "netherite_scrap_item.h"
#include "netherite_shovel_item.h"
#include "netherite_sword_item.h"
#include "netherrack_item.h"
#include "note_block_item.h"

void ItemRegistry::generateN() {

  { // ID: 59
    registry[59] = std::make_shared<NetherGoldOreItem>();
  }

  { // ID: 60
    registry[60] = std::make_shared<NetherQuartzOreItem>();
  }

  { // ID: 72
    registry[72] = std::make_shared<NetheriteBlockItem>();
  }

  { // ID: 203
    registry[203] = std::make_shared<NetherSproutsItem>();
  }

  { // ID: 232
    registry[232] = std::make_shared<NetherBrickSlabItem>();
  }

  { // ID: 280
    registry[280] = std::make_shared<NetherrackItem>();
  }

  { // ID: 321
    registry[321] = std::make_shared<NetherBricksItem>();
  }

  { // ID: 324
    registry[324] = std::make_shared<NetherBrickFenceItem>();
  }

  { // ID: 325
    registry[325] = std::make_shared<NetherBrickStairsItem>();
  }

  { // ID: 358
    registry[358] = std::make_shared<NetherBrickWallItem>();
  }

  { // ID: 469
    registry[469] = std::make_shared<NetherWartBlockItem>();
  }

  { // ID: 631
    registry[631] = std::make_shared<NoteBlockItem>();
  }

  { // ID: 733
    registry[733] = std::make_shared<NetheriteIngotItem>();
  }

  { // ID: 734
    registry[734] = std::make_shared<NetheriteScrapItem>();
  }

  { // ID: 760
    registry[760] = std::make_shared<NetheriteSwordItem>();
  }

  { // ID: 761
    registry[761] = std::make_shared<NetheriteShovelItem>();
  }

  { // ID: 762
    registry[762] = std::make_shared<NetheritePickaxeItem>();
  }

  { // ID: 763
    registry[763] = std::make_shared<NetheriteAxeItem>();
  }

  { // ID: 764
    registry[764] = std::make_shared<NetheriteHoeItem>();
  }

  { // ID: 794
    registry[794] = std::make_shared<NetheriteHelmetItem>();
  }

  { // ID: 795
    registry[795] = std::make_shared<NetheriteChestplateItem>();
  }

  { // ID: 796
    registry[796] = std::make_shared<NetheriteLeggingsItem>();
  }

  { // ID: 797
    registry[797] = std::make_shared<NetheriteBootsItem>();
  }

  { // ID: 901
    registry[901] = std::make_shared<NetherWartItem>();
  }

  { // ID: 1002
    registry[1002] = std::make_shared<NetherStarItem>();
  }

  { // ID: 1007
    registry[1007] = std::make_shared<NetherBrickItem>();
  }

  { // ID: 1021
    registry[1021] = std::make_shared<NameTagItem>();
  }

  { // ID: 1076
    registry[1076] = std::make_shared<NautilusShellItem>();
  }
}