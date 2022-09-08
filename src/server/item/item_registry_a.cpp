/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "item_registry.h"

#include "acacia_boat_item.h"
#include "acacia_button_item.h"
#include "acacia_chest_boat_item.h"
#include "acacia_door_item.h"
#include "acacia_fence_item.h"
#include "acacia_fence_gate_item.h"
#include "acacia_leaves_item.h"
#include "acacia_log_item.h"
#include "acacia_planks_item.h"
#include "acacia_pressure_plate_item.h"
#include "acacia_sapling_item.h"
#include "acacia_sign_item.h"
#include "acacia_slab_item.h"
#include "acacia_stairs_item.h"
#include "acacia_trapdoor_item.h"
#include "acacia_wood_item.h"
#include "activator_rail_item.h"
#include "air_item.h"
#include "allay_spawn_egg_item.h"
#include "allium_item.h"
#include "amethyst_block_item.h"
#include "amethyst_cluster_item.h"
#include "amethyst_shard_item.h"
#include "ancient_debris_item.h"
#include "andesite_item.h"
#include "andesite_slab_item.h"
#include "andesite_stairs_item.h"
#include "andesite_wall_item.h"
#include "anvil_item.h"
#include "apple_item.h"
#include "armor_stand_item.h"
#include "arrow_item.h"
#include "axolotl_bucket_item.h"
#include "axolotl_spawn_egg_item.h"
#include "azalea_item.h"
#include "azalea_leaves_item.h"
#include "azure_bluet_item.h"

void ItemRegistry::generateA() {

  { // ID: 0
    registry[0] = std::make_shared<AirItem>();
  }

  { // ID: 6
    registry[6] = std::make_shared<AndesiteItem>();
  }

  { // ID: 27
    registry[27] = std::make_shared<AcaciaPlanksItem>();
  }

  { // ID: 36
    registry[36] = std::make_shared<AcaciaSaplingItem>();
  }

  { // ID: 61
    registry[61] = std::make_shared<AncientDebrisItem>();
  }

  { // ID: 66
    registry[66] = std::make_shared<AmethystBlockItem>();
  }

  { // ID: 108
    registry[108] = std::make_shared<AcaciaLogItem>();
  }

  { // ID: 137
    registry[137] = std::make_shared<AcaciaWoodItem>();
  }

  { // ID: 146
    registry[146] = std::make_shared<AcaciaLeavesItem>();
  }

  { // ID: 149
    registry[149] = std::make_shared<AzaleaLeavesItem>();
  }

  { // ID: 162
    registry[162] = std::make_shared<AzaleaItem>();
  }

  { // ID: 186
    registry[186] = std::make_shared<AlliumItem>();
  }

  { // ID: 187
    registry[187] = std::make_shared<AzureBluetItem>();
  }

  { // ID: 218
    registry[218] = std::make_shared<AcaciaSlabItem>();
  }

  { // ID: 272
    registry[272] = std::make_shared<AcaciaFenceItem>();
  }

  { // ID: 342
    registry[342] = std::make_shared<AcaciaStairsItem>();
  }

  { // ID: 359
    registry[359] = std::make_shared<AndesiteWallItem>();
  }

  { // ID: 371
    registry[371] = std::make_shared<AnvilItem>();
  }

  { // ID: 582
    registry[582] = std::make_shared<AndesiteStairsItem>();
  }

  { // ID: 599
    registry[599] = std::make_shared<AndesiteSlabItem>();
  }

  { // ID: 638
    registry[638] = std::make_shared<AcaciaButtonItem>();
  }

  { // ID: 651
    registry[651] = std::make_shared<AcaciaPressurePlateItem>();
  }

  { // ID: 661
    registry[661] = std::make_shared<AcaciaDoorItem>();
  }

  { // ID: 671
    registry[671] = std::make_shared<AcaciaTrapdoorItem>();
  }

  { // ID: 680
    registry[680] = std::make_shared<AcaciaFenceGateItem>();
  }

  { // ID: 688
    registry[688] = std::make_shared<ActivatorRailItem>();
  }

  { // ID: 706
    registry[706] = std::make_shared<AcaciaBoatItem>();
  }

  { // ID: 707
    registry[707] = std::make_shared<AcaciaChestBoatItem>();
  }

  { // ID: 717
    registry[717] = std::make_shared<AppleItem>();
  }

  { // ID: 719
    registry[719] = std::make_shared<ArrowItem>();
  }

  { // ID: 726
    registry[726] = std::make_shared<AmethystShardItem>();
  }

  { // ID: 808
    registry[808] = std::make_shared<AcaciaSignItem>();
  }

  { // ID: 824
    registry[824] = std::make_shared<AxolotlBucketItem>();
  }

  { // ID: 912
    registry[912] = std::make_shared<AllaySpawnEggItem>();
  }

  { // ID: 913
    registry[913] = std::make_shared<AxolotlSpawnEggItem>();
  }

  { // ID: 1015
    registry[1015] = std::make_shared<ArmorStandItem>();
  }

  { // ID: 1145
    registry[1145] = std::make_shared<AmethystClusterItem>();
  }
}