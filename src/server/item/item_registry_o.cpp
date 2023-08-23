/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

#include "oak_boat_item.h"
#include "oak_button_item.h"
#include "oak_chest_boat_item.h"
#include "oak_door_item.h"
#include "oak_fence_item.h"
#include "oak_fence_gate_item.h"
#include "oak_leaves_item.h"
#include "oak_log_item.h"
#include "oak_planks_item.h"
#include "oak_pressure_plate_item.h"
#include "oak_sapling_item.h"
#include "oak_sign_item.h"
#include "oak_slab_item.h"
#include "oak_stairs_item.h"
#include "oak_trapdoor_item.h"
#include "oak_wood_item.h"
#include "observer_item.h"
#include "obsidian_item.h"
#include "ocelot_spawn_egg_item.h"
#include "ochre_froglight_item.h"
#include "orange_banner_item.h"
#include "orange_bed_item.h"
#include "orange_candle_item.h"
#include "orange_carpet_item.h"
#include "orange_concrete_item.h"
#include "orange_concrete_powder_item.h"
#include "orange_dye_item.h"
#include "orange_glazed_terracotta_item.h"
#include "orange_shulker_box_item.h"
#include "orange_stained_glass_item.h"
#include "orange_stained_glass_pane_item.h"
#include "orange_terracotta_item.h"
#include "orange_tulip_item.h"
#include "orange_wool_item.h"
#include "oxeye_daisy_item.h"
#include "oxidized_copper_item.h"
#include "oxidized_cut_copper_item.h"
#include "oxidized_cut_copper_slab_item.h"
#include "oxidized_cut_copper_stairs_item.h"

void ItemRegistry::generateO() {

  { // ID: 23
    registry[23] = std::make_shared<OakPlanksItem>();
  }

  { // ID: 32
    registry[32] = std::make_shared<OakSaplingItem>();
  }

  { // ID: 75
    registry[75] = std::make_shared<OxidizedCopperItem>();
  }

  { // ID: 79
    registry[79] = std::make_shared<OxidizedCutCopperItem>();
  }

  { // ID: 83
    registry[83] = std::make_shared<OxidizedCutCopperStairsItem>();
  }

  { // ID: 87
    registry[87] = std::make_shared<OxidizedCutCopperSlabItem>();
  }

  { // ID: 104
    registry[104] = std::make_shared<OakLogItem>();
  }

  { // ID: 133
    registry[133] = std::make_shared<OakWoodItem>();
  }

  { // ID: 142
    registry[142] = std::make_shared<OakLeavesItem>();
  }

  { // ID: 168
    registry[168] = std::make_shared<OrangeWoolItem>();
  }

  { // ID: 189
    registry[189] = std::make_shared<OrangeTulipItem>();
  }

  { // ID: 192
    registry[192] = std::make_shared<OxeyeDaisyItem>();
  }

  { // ID: 214
    registry[214] = std::make_shared<OakSlabItem>();
  }

  { // ID: 247
    registry[247] = std::make_shared<ObsidianItem>();
  }

  { // ID: 268
    registry[268] = std::make_shared<OakFenceItem>();
  }

  { // ID: 338
    registry[338] = std::make_shared<OakStairsItem>();
  }

  { // ID: 380
    registry[380] = std::make_shared<OrangeTerracottaItem>();
  }

  { // ID: 399
    registry[399] = std::make_shared<OrangeCarpetItem>();
  }

  { // ID: 424
    registry[424] = std::make_shared<OrangeStainedGlassItem>();
  }

  { // ID: 440
    registry[440] = std::make_shared<OrangeStainedGlassPaneItem>();
  }

  { // ID: 476
    registry[476] = std::make_shared<OrangeShulkerBoxItem>();
  }

  { // ID: 492
    registry[492] = std::make_shared<OrangeGlazedTerracottaItem>();
  }

  { // ID: 508
    registry[508] = std::make_shared<OrangeConcreteItem>();
  }

  { // ID: 524
    registry[524] = std::make_shared<OrangeConcretePowderItem>();
  }

  { // ID: 617
    registry[617] = std::make_shared<ObserverItem>();
  }

  { // ID: 634
    registry[634] = std::make_shared<OakButtonItem>();
  }

  { // ID: 647
    registry[647] = std::make_shared<OakPressurePlateItem>();
  }

  { // ID: 657
    registry[657] = std::make_shared<OakDoorItem>();
  }

  { // ID: 667
    registry[667] = std::make_shared<OakTrapdoorItem>();
  }

  { // ID: 676
    registry[676] = std::make_shared<OakFenceGateItem>();
  }

  { // ID: 698
    registry[698] = std::make_shared<OakBoatItem>();
  }

  { // ID: 699
    registry[699] = std::make_shared<OakChestBoatItem>();
  }

  { // ID: 804
    registry[804] = std::make_shared<OakSignItem>();
  }

  { // ID: 850
    registry[850] = std::make_shared<OrangeDyeItem>();
  }

  { // ID: 870
    registry[870] = std::make_shared<OrangeBedItem>();
  }

  { // ID: 943
    registry[943] = std::make_shared<OcelotSpawnEggItem>();
  }

  { // ID: 1026
    registry[1026] = std::make_shared<OrangeBannerItem>();
  }

  { // ID: 1127
    registry[1127] = std::make_shared<OrangeCandleItem>();
  }

  { // ID: 1147
    registry[1147] = std::make_shared<OchreFroglightItem>();
  }
}