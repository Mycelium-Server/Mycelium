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
#include "baked_potato_item.h"
#include "bamboo_item.h"
#include "barrel_item.h"
#include "barrier_item.h"
#include "basalt_item.h"
#include "bat_spawn_egg_item.h"
#include "beacon_item.h"
#include "bedrock_item.h"
#include "bee_nest_item.h"
#include "bee_spawn_egg_item.h"
#include "beef_item.h"
#include "beehive_item.h"
#include "beetroot_item.h"
#include "beetroot_seeds_item.h"
#include "beetroot_soup_item.h"
#include "bell_item.h"
#include "big_dripleaf_item.h"
#include "birch_boat_item.h"
#include "birch_button_item.h"
#include "birch_chest_boat_item.h"
#include "birch_door_item.h"
#include "birch_fence_item.h"
#include "birch_fence_gate_item.h"
#include "birch_leaves_item.h"
#include "birch_log_item.h"
#include "birch_planks_item.h"
#include "birch_pressure_plate_item.h"
#include "birch_sapling_item.h"
#include "birch_sign_item.h"
#include "birch_slab_item.h"
#include "birch_stairs_item.h"
#include "birch_trapdoor_item.h"
#include "birch_wood_item.h"
#include "black_banner_item.h"
#include "black_bed_item.h"
#include "black_candle_item.h"
#include "black_carpet_item.h"
#include "black_concrete_item.h"
#include "black_concrete_powder_item.h"
#include "black_dye_item.h"
#include "black_glazed_terracotta_item.h"
#include "black_shulker_box_item.h"
#include "black_stained_glass_item.h"
#include "black_stained_glass_pane_item.h"
#include "black_terracotta_item.h"
#include "black_wool_item.h"
#include "blackstone_item.h"
#include "blackstone_slab_item.h"
#include "blackstone_stairs_item.h"
#include "blackstone_wall_item.h"
#include "blast_furnace_item.h"
#include "blaze_powder_item.h"
#include "blaze_rod_item.h"
#include "blaze_spawn_egg_item.h"
#include "blue_banner_item.h"
#include "blue_bed_item.h"
#include "blue_candle_item.h"
#include "blue_carpet_item.h"
#include "blue_concrete_item.h"
#include "blue_concrete_powder_item.h"
#include "blue_dye_item.h"
#include "blue_glazed_terracotta_item.h"
#include "blue_ice_item.h"
#include "blue_orchid_item.h"
#include "blue_shulker_box_item.h"
#include "blue_stained_glass_item.h"
#include "blue_stained_glass_pane_item.h"
#include "blue_terracotta_item.h"
#include "blue_wool_item.h"
#include "bone_item.h"
#include "bone_block_item.h"
#include "bone_meal_item.h"
#include "book_item.h"
#include "bookshelf_item.h"
#include "bow_item.h"
#include "bowl_item.h"
#include "brain_coral_item.h"
#include "brain_coral_block_item.h"
#include "brain_coral_fan_item.h"
#include "bread_item.h"
#include "brewing_stand_item.h"
#include "brick_item.h"
#include "brick_slab_item.h"
#include "brick_stairs_item.h"
#include "brick_wall_item.h"
#include "bricks_item.h"
#include "brown_banner_item.h"
#include "brown_bed_item.h"
#include "brown_candle_item.h"
#include "brown_carpet_item.h"
#include "brown_concrete_item.h"
#include "brown_concrete_powder_item.h"
#include "brown_dye_item.h"
#include "brown_glazed_terracotta_item.h"
#include "brown_mushroom_item.h"
#include "brown_mushroom_block_item.h"
#include "brown_shulker_box_item.h"
#include "brown_stained_glass_item.h"
#include "brown_stained_glass_pane_item.h"
#include "brown_terracotta_item.h"
#include "brown_wool_item.h"
#include "bubble_coral_item.h"
#include "bubble_coral_block_item.h"
#include "bubble_coral_fan_item.h"
#include "bucket_item.h"
#include "budding_amethyst_item.h"
#include "bundle_item.h"
#include "cactus_item.h"
#include "cake_item.h"
#include "calcite_item.h"
#include "campfire_item.h"
#include "candle_item.h"
#include "carrot_item.h"
#include "carrot_on_a_stick_item.h"
#include "cartography_table_item.h"
#include "carved_pumpkin_item.h"
#include "cat_spawn_egg_item.h"
#include "cauldron_item.h"
#include "cave_spider_spawn_egg_item.h"
#include "chain_item.h"
#include "chain_command_block_item.h"
#include "chainmail_boots_item.h"
#include "chainmail_chestplate_item.h"
#include "chainmail_helmet_item.h"
#include "chainmail_leggings_item.h"
#include "charcoal_item.h"
#include "chest_item.h"
#include "chest_minecart_item.h"
#include "chicken_item.h"
#include "chicken_spawn_egg_item.h"
#include "chipped_anvil_item.h"
#include "chiseled_deepslate_item.h"
#include "chiseled_nether_bricks_item.h"
#include "chiseled_polished_blackstone_item.h"
#include "chiseled_quartz_block_item.h"
#include "chiseled_red_sandstone_item.h"
#include "chiseled_sandstone_item.h"
#include "chiseled_stone_bricks_item.h"
#include "chorus_flower_item.h"
#include "chorus_fruit_item.h"
#include "chorus_plant_item.h"
#include "clay_item.h"
#include "clay_ball_item.h"
#include "clock_item.h"
#include "coal_item.h"
#include "coal_block_item.h"
#include "coal_ore_item.h"
#include "coarse_dirt_item.h"
#include "cobbled_deepslate_item.h"
#include "cobbled_deepslate_slab_item.h"
#include "cobbled_deepslate_stairs_item.h"
#include "cobbled_deepslate_wall_item.h"
#include "cobblestone_item.h"
#include "cobblestone_slab_item.h"
#include "cobblestone_stairs_item.h"
#include "cobblestone_wall_item.h"
#include "cobweb_item.h"
#include "cocoa_beans_item.h"
#include "cod_item.h"
#include "cod_bucket_item.h"
#include "cod_spawn_egg_item.h"
#include "command_block_item.h"
#include "command_block_minecart_item.h"
#include "comparator_item.h"
#include "compass_item.h"
#include "composter_item.h"
#include "conduit_item.h"
#include "cooked_beef_item.h"
#include "cooked_chicken_item.h"
#include "cooked_cod_item.h"
#include "cooked_mutton_item.h"
#include "cooked_porkchop_item.h"
#include "cooked_rabbit_item.h"
#include "cooked_salmon_item.h"
#include "cookie_item.h"
#include "copper_block_item.h"
#include "copper_ingot_item.h"
#include "copper_ore_item.h"
#include "cornflower_item.h"
#include "cow_spawn_egg_item.h"
#include "cracked_deepslate_bricks_item.h"
#include "cracked_deepslate_tiles_item.h"
#include "cracked_nether_bricks_item.h"
#include "cracked_polished_blackstone_bricks_item.h"
#include "cracked_stone_bricks_item.h"
#include "crafting_table_item.h"
#include "creeper_banner_pattern_item.h"
#include "creeper_head_item.h"
#include "creeper_spawn_egg_item.h"
#include "crimson_button_item.h"
#include "crimson_door_item.h"
#include "crimson_fence_item.h"
#include "crimson_fence_gate_item.h"
#include "crimson_fungus_item.h"
#include "crimson_hyphae_item.h"
#include "crimson_nylium_item.h"
#include "crimson_planks_item.h"
#include "crimson_pressure_plate_item.h"
#include "crimson_roots_item.h"
#include "crimson_sign_item.h"
#include "crimson_slab_item.h"
#include "crimson_stairs_item.h"
#include "crimson_stem_item.h"
#include "crimson_trapdoor_item.h"
#include "crossbow_item.h"
#include "crying_obsidian_item.h"
#include "cut_copper_item.h"
#include "cut_copper_slab_item.h"
#include "cut_copper_stairs_item.h"
#include "cut_red_sandstone_item.h"
#include "cut_red_sandstone_slab_item.h"
#include "cut_sandstone_item.h"
#include "cut_sandstone_slab_item.h"
#include "cyan_banner_item.h"
#include "cyan_bed_item.h"
#include "cyan_candle_item.h"
#include "cyan_carpet_item.h"
#include "cyan_concrete_item.h"
#include "cyan_concrete_powder_item.h"
#include "cyan_dye_item.h"
#include "cyan_glazed_terracotta_item.h"
#include "cyan_shulker_box_item.h"
#include "cyan_stained_glass_item.h"
#include "cyan_stained_glass_pane_item.h"
#include "cyan_terracotta_item.h"
#include "cyan_wool_item.h"
#include "damaged_anvil_item.h"
#include "dandelion_item.h"
#include "dark_oak_boat_item.h"
#include "dark_oak_button_item.h"
#include "dark_oak_chest_boat_item.h"
#include "dark_oak_door_item.h"
#include "dark_oak_fence_item.h"
#include "dark_oak_fence_gate_item.h"
#include "dark_oak_leaves_item.h"
#include "dark_oak_log_item.h"
#include "dark_oak_planks_item.h"
#include "dark_oak_pressure_plate_item.h"
#include "dark_oak_sapling_item.h"
#include "dark_oak_sign_item.h"
#include "dark_oak_slab_item.h"
#include "dark_oak_stairs_item.h"
#include "dark_oak_trapdoor_item.h"
#include "dark_oak_wood_item.h"
#include "dark_prismarine_item.h"
#include "dark_prismarine_slab_item.h"
#include "dark_prismarine_stairs_item.h"
#include "daylight_detector_item.h"
#include "dead_brain_coral_item.h"
#include "dead_brain_coral_block_item.h"
#include "dead_brain_coral_fan_item.h"
#include "dead_bubble_coral_item.h"
#include "dead_bubble_coral_block_item.h"
#include "dead_bubble_coral_fan_item.h"
#include "dead_bush_item.h"
#include "dead_fire_coral_item.h"
#include "dead_fire_coral_block_item.h"
#include "dead_fire_coral_fan_item.h"
#include "dead_horn_coral_item.h"
#include "dead_horn_coral_block_item.h"
#include "dead_horn_coral_fan_item.h"
#include "dead_tube_coral_item.h"
#include "dead_tube_coral_block_item.h"
#include "dead_tube_coral_fan_item.h"
#include "debug_stick_item.h"
#include "deepslate_item.h"
#include "deepslate_brick_slab_item.h"
#include "deepslate_brick_stairs_item.h"
#include "deepslate_brick_wall_item.h"
#include "deepslate_bricks_item.h"
#include "deepslate_coal_ore_item.h"
#include "deepslate_copper_ore_item.h"
#include "deepslate_diamond_ore_item.h"
#include "deepslate_emerald_ore_item.h"
#include "deepslate_gold_ore_item.h"
#include "deepslate_iron_ore_item.h"
#include "deepslate_lapis_ore_item.h"
#include "deepslate_redstone_ore_item.h"
#include "deepslate_tile_slab_item.h"
#include "deepslate_tile_stairs_item.h"
#include "deepslate_tile_wall_item.h"
#include "deepslate_tiles_item.h"
#include "detector_rail_item.h"
#include "diamond_item.h"
#include "diamond_axe_item.h"
#include "diamond_block_item.h"
#include "diamond_boots_item.h"
#include "diamond_chestplate_item.h"
#include "diamond_helmet_item.h"
#include "diamond_hoe_item.h"
#include "diamond_horse_armor_item.h"
#include "diamond_leggings_item.h"
#include "diamond_ore_item.h"
#include "diamond_pickaxe_item.h"
#include "diamond_shovel_item.h"
#include "diamond_sword_item.h"
#include "diorite_item.h"
#include "diorite_slab_item.h"
#include "diorite_stairs_item.h"
#include "diorite_wall_item.h"
#include "dirt_item.h"
#include "dirt_path_item.h"
#include "disc_fragment_5_item.h"
#include "dispenser_item.h"
#include "dolphin_spawn_egg_item.h"
#include "donkey_spawn_egg_item.h"
#include "dragon_breath_item.h"
#include "dragon_egg_item.h"
#include "dragon_head_item.h"
#include "dried_kelp_item.h"
#include "dried_kelp_block_item.h"
#include "dripstone_block_item.h"
#include "dropper_item.h"
#include "drowned_spawn_egg_item.h"
#include "echo_shard_item.h"
#include "egg_item.h"
#include "elder_guardian_spawn_egg_item.h"
#include "elytra_item.h"
#include "emerald_item.h"
#include "emerald_block_item.h"
#include "emerald_ore_item.h"
#include "enchanted_book_item.h"
#include "enchanted_golden_apple_item.h"
#include "enchanting_table_item.h"
#include "end_crystal_item.h"
#include "end_portal_frame_item.h"
#include "end_rod_item.h"
#include "end_stone_item.h"
#include "end_stone_brick_slab_item.h"
#include "end_stone_brick_stairs_item.h"
#include "end_stone_brick_wall_item.h"
#include "end_stone_bricks_item.h"
#include "ender_chest_item.h"
#include "ender_eye_item.h"
#include "ender_pearl_item.h"
#include "enderman_spawn_egg_item.h"
#include "endermite_spawn_egg_item.h"
#include "evoker_spawn_egg_item.h"
#include "experience_bottle_item.h"
#include "exposed_copper_item.h"
#include "exposed_cut_copper_item.h"
#include "exposed_cut_copper_slab_item.h"
#include "exposed_cut_copper_stairs_item.h"
#include "farmland_item.h"
#include "feather_item.h"
#include "fermented_spider_eye_item.h"
#include "fern_item.h"
#include "filled_map_item.h"
#include "fire_charge_item.h"
#include "fire_coral_item.h"
#include "fire_coral_block_item.h"
#include "fire_coral_fan_item.h"
#include "firework_rocket_item.h"
#include "firework_star_item.h"
#include "fishing_rod_item.h"
#include "fletching_table_item.h"
#include "flint_item.h"
#include "flint_and_steel_item.h"
#include "flower_banner_pattern_item.h"
#include "flower_pot_item.h"
#include "flowering_azalea_item.h"
#include "flowering_azalea_leaves_item.h"
#include "fox_spawn_egg_item.h"
#include "frog_spawn_egg_item.h"
#include "frogspawn_item.h"
#include "furnace_item.h"
#include "furnace_minecart_item.h"
#include "ghast_spawn_egg_item.h"
#include "ghast_tear_item.h"
#include "gilded_blackstone_item.h"
#include "glass_item.h"
#include "glass_bottle_item.h"
#include "glass_pane_item.h"
#include "glistering_melon_slice_item.h"
#include "globe_banner_pattern_item.h"
#include "glow_berries_item.h"
#include "glow_ink_sac_item.h"
#include "glow_item_frame_item.h"
#include "glow_lichen_item.h"
#include "glow_squid_spawn_egg_item.h"
#include "glowstone_item.h"
#include "glowstone_dust_item.h"
#include "goat_horn_item.h"
#include "goat_spawn_egg_item.h"
#include "gold_block_item.h"
#include "gold_ingot_item.h"
#include "gold_nugget_item.h"
#include "gold_ore_item.h"
#include "golden_apple_item.h"
#include "golden_axe_item.h"
#include "golden_boots_item.h"
#include "golden_carrot_item.h"
#include "golden_chestplate_item.h"
#include "golden_helmet_item.h"
#include "golden_hoe_item.h"
#include "golden_horse_armor_item.h"
#include "golden_leggings_item.h"
#include "golden_pickaxe_item.h"
#include "golden_shovel_item.h"
#include "golden_sword_item.h"
#include "granite_item.h"
#include "granite_slab_item.h"
#include "granite_stairs_item.h"
#include "granite_wall_item.h"
#include "grass_item.h"
#include "grass_block_item.h"
#include "gravel_item.h"
#include "gray_banner_item.h"
#include "gray_bed_item.h"
#include "gray_candle_item.h"
#include "gray_carpet_item.h"
#include "gray_concrete_item.h"
#include "gray_concrete_powder_item.h"
#include "gray_dye_item.h"
#include "gray_glazed_terracotta_item.h"
#include "gray_shulker_box_item.h"
#include "gray_stained_glass_item.h"
#include "gray_stained_glass_pane_item.h"
#include "gray_terracotta_item.h"
#include "gray_wool_item.h"
#include "green_banner_item.h"
#include "green_bed_item.h"
#include "green_candle_item.h"
#include "green_carpet_item.h"
#include "green_concrete_item.h"
#include "green_concrete_powder_item.h"
#include "green_dye_item.h"
#include "green_glazed_terracotta_item.h"
#include "green_shulker_box_item.h"
#include "green_stained_glass_item.h"
#include "green_stained_glass_pane_item.h"
#include "green_terracotta_item.h"
#include "green_wool_item.h"
#include "grindstone_item.h"
#include "guardian_spawn_egg_item.h"
#include "gunpowder_item.h"
#include "hanging_roots_item.h"
#include "hay_block_item.h"
#include "heart_of_the_sea_item.h"
#include "heavy_weighted_pressure_plate_item.h"
#include "hoglin_spawn_egg_item.h"
#include "honey_block_item.h"
#include "honey_bottle_item.h"
#include "honeycomb_item.h"
#include "honeycomb_block_item.h"
#include "hopper_item.h"
#include "hopper_minecart_item.h"
#include "horn_coral_item.h"
#include "horn_coral_block_item.h"
#include "horn_coral_fan_item.h"
#include "horse_spawn_egg_item.h"
#include "husk_spawn_egg_item.h"
#include "ice_item.h"
#include "infested_chiseled_stone_bricks_item.h"
#include "infested_cobblestone_item.h"
#include "infested_cracked_stone_bricks_item.h"
#include "infested_deepslate_item.h"
#include "infested_mossy_stone_bricks_item.h"
#include "infested_stone_item.h"
#include "infested_stone_bricks_item.h"
#include "ink_sac_item.h"
#include "iron_axe_item.h"
#include "iron_bars_item.h"
#include "iron_block_item.h"
#include "iron_boots_item.h"
#include "iron_chestplate_item.h"
#include "iron_door_item.h"
#include "iron_helmet_item.h"
#include "iron_hoe_item.h"
#include "iron_horse_armor_item.h"
#include "iron_ingot_item.h"
#include "iron_leggings_item.h"
#include "iron_nugget_item.h"
#include "iron_ore_item.h"
#include "iron_pickaxe_item.h"
#include "iron_shovel_item.h"
#include "iron_sword_item.h"
#include "iron_trapdoor_item.h"
#include "item_frame_item.h"
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
#include "kelp_item.h"
#include "knowledge_book_item.h"
#include "ladder_item.h"
#include "lantern_item.h"
#include "lapis_block_item.h"
#include "lapis_lazuli_item.h"
#include "lapis_ore_item.h"
#include "large_amethyst_bud_item.h"
#include "large_fern_item.h"
#include "lava_bucket_item.h"
#include "lead_item.h"
#include "leather_item.h"
#include "leather_boots_item.h"
#include "leather_chestplate_item.h"
#include "leather_helmet_item.h"
#include "leather_horse_armor_item.h"
#include "leather_leggings_item.h"
#include "lectern_item.h"
#include "lever_item.h"
#include "light_item.h"
#include "light_blue_banner_item.h"
#include "light_blue_bed_item.h"
#include "light_blue_candle_item.h"
#include "light_blue_carpet_item.h"
#include "light_blue_concrete_item.h"
#include "light_blue_concrete_powder_item.h"
#include "light_blue_dye_item.h"
#include "light_blue_glazed_terracotta_item.h"
#include "light_blue_shulker_box_item.h"
#include "light_blue_stained_glass_item.h"
#include "light_blue_stained_glass_pane_item.h"
#include "light_blue_terracotta_item.h"
#include "light_blue_wool_item.h"
#include "light_gray_banner_item.h"
#include "light_gray_bed_item.h"
#include "light_gray_candle_item.h"
#include "light_gray_carpet_item.h"
#include "light_gray_concrete_item.h"
#include "light_gray_concrete_powder_item.h"
#include "light_gray_dye_item.h"
#include "light_gray_glazed_terracotta_item.h"
#include "light_gray_shulker_box_item.h"
#include "light_gray_stained_glass_item.h"
#include "light_gray_stained_glass_pane_item.h"
#include "light_gray_terracotta_item.h"
#include "light_gray_wool_item.h"
#include "light_weighted_pressure_plate_item.h"
#include "lightning_rod_item.h"
#include "lilac_item.h"
#include "lily_of_the_valley_item.h"
#include "lily_pad_item.h"
#include "lime_banner_item.h"
#include "lime_bed_item.h"
#include "lime_candle_item.h"
#include "lime_carpet_item.h"
#include "lime_concrete_item.h"
#include "lime_concrete_powder_item.h"
#include "lime_dye_item.h"
#include "lime_glazed_terracotta_item.h"
#include "lime_shulker_box_item.h"
#include "lime_stained_glass_item.h"
#include "lime_stained_glass_pane_item.h"
#include "lime_terracotta_item.h"
#include "lime_wool_item.h"
#include "lingering_potion_item.h"
#include "llama_spawn_egg_item.h"
#include "lodestone_item.h"
#include "loom_item.h"
#include "magenta_banner_item.h"
#include "magenta_bed_item.h"
#include "magenta_candle_item.h"
#include "magenta_carpet_item.h"
#include "magenta_concrete_item.h"
#include "magenta_concrete_powder_item.h"
#include "magenta_dye_item.h"
#include "magenta_glazed_terracotta_item.h"
#include "magenta_shulker_box_item.h"
#include "magenta_stained_glass_item.h"
#include "magenta_stained_glass_pane_item.h"
#include "magenta_terracotta_item.h"
#include "magenta_wool_item.h"
#include "magma_block_item.h"
#include "magma_cream_item.h"
#include "magma_cube_spawn_egg_item.h"
#include "mangrove_boat_item.h"
#include "mangrove_button_item.h"
#include "mangrove_chest_boat_item.h"
#include "mangrove_door_item.h"
#include "mangrove_fence_item.h"
#include "mangrove_fence_gate_item.h"
#include "mangrove_leaves_item.h"
#include "mangrove_log_item.h"
#include "mangrove_planks_item.h"
#include "mangrove_pressure_plate_item.h"
#include "mangrove_propagule_item.h"
#include "mangrove_roots_item.h"
#include "mangrove_sign_item.h"
#include "mangrove_slab_item.h"
#include "mangrove_stairs_item.h"
#include "mangrove_trapdoor_item.h"
#include "mangrove_wood_item.h"
#include "map_item.h"
#include "medium_amethyst_bud_item.h"
#include "melon_item.h"
#include "melon_seeds_item.h"
#include "melon_slice_item.h"
#include "milk_bucket_item.h"
#include "minecart_item.h"
#include "mojang_banner_pattern_item.h"
#include "mooshroom_spawn_egg_item.h"
#include "moss_block_item.h"
#include "moss_carpet_item.h"
#include "mossy_cobblestone_item.h"
#include "mossy_cobblestone_slab_item.h"
#include "mossy_cobblestone_stairs_item.h"
#include "mossy_cobblestone_wall_item.h"
#include "mossy_stone_brick_slab_item.h"
#include "mossy_stone_brick_stairs_item.h"
#include "mossy_stone_brick_wall_item.h"
#include "mossy_stone_bricks_item.h"
#include "mud_item.h"
#include "mud_brick_slab_item.h"
#include "mud_brick_stairs_item.h"
#include "mud_brick_wall_item.h"
#include "mud_bricks_item.h"
#include "muddy_mangrove_roots_item.h"
#include "mule_spawn_egg_item.h"
#include "mushroom_stem_item.h"
#include "mushroom_stew_item.h"
#include "music_disc_11_item.h"
#include "music_disc_13_item.h"
#include "music_disc_5_item.h"
#include "music_disc_blocks_item.h"
#include "music_disc_cat_item.h"
#include "music_disc_chirp_item.h"
#include "music_disc_far_item.h"
#include "music_disc_mall_item.h"
#include "music_disc_mellohi_item.h"
#include "music_disc_otherside_item.h"
#include "music_disc_pigstep_item.h"
#include "music_disc_stal_item.h"
#include "music_disc_strad_item.h"
#include "music_disc_wait_item.h"
#include "music_disc_ward_item.h"
#include "mutton_item.h"
#include "mycelium_item.h"
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
#include "packed_ice_item.h"
#include "packed_mud_item.h"
#include "painting_item.h"
#include "panda_spawn_egg_item.h"
#include "paper_item.h"
#include "parrot_spawn_egg_item.h"
#include "pearlescent_froglight_item.h"
#include "peony_item.h"
#include "petrified_oak_slab_item.h"
#include "phantom_membrane_item.h"
#include "phantom_spawn_egg_item.h"
#include "pig_spawn_egg_item.h"
#include "piglin_banner_pattern_item.h"
#include "piglin_brute_spawn_egg_item.h"
#include "piglin_spawn_egg_item.h"
#include "pillager_spawn_egg_item.h"
#include "pink_banner_item.h"
#include "pink_bed_item.h"
#include "pink_candle_item.h"
#include "pink_carpet_item.h"
#include "pink_concrete_item.h"
#include "pink_concrete_powder_item.h"
#include "pink_dye_item.h"
#include "pink_glazed_terracotta_item.h"
#include "pink_shulker_box_item.h"
#include "pink_stained_glass_item.h"
#include "pink_stained_glass_pane_item.h"
#include "pink_terracotta_item.h"
#include "pink_tulip_item.h"
#include "pink_wool_item.h"
#include "piston_item.h"
#include "player_head_item.h"
#include "podzol_item.h"
#include "pointed_dripstone_item.h"
#include "poisonous_potato_item.h"
#include "polar_bear_spawn_egg_item.h"
#include "polished_andesite_item.h"
#include "polished_andesite_slab_item.h"
#include "polished_andesite_stairs_item.h"
#include "polished_basalt_item.h"
#include "polished_blackstone_item.h"
#include "polished_blackstone_brick_slab_item.h"
#include "polished_blackstone_brick_stairs_item.h"
#include "polished_blackstone_brick_wall_item.h"
#include "polished_blackstone_bricks_item.h"
#include "polished_blackstone_button_item.h"
#include "polished_blackstone_pressure_plate_item.h"
#include "polished_blackstone_slab_item.h"
#include "polished_blackstone_stairs_item.h"
#include "polished_blackstone_wall_item.h"
#include "polished_deepslate_item.h"
#include "polished_deepslate_slab_item.h"
#include "polished_deepslate_stairs_item.h"
#include "polished_deepslate_wall_item.h"
#include "polished_diorite_item.h"
#include "polished_diorite_slab_item.h"
#include "polished_diorite_stairs_item.h"
#include "polished_granite_item.h"
#include "polished_granite_slab_item.h"
#include "polished_granite_stairs_item.h"
#include "popped_chorus_fruit_item.h"
#include "poppy_item.h"
#include "porkchop_item.h"
#include "potato_item.h"
#include "potion_item.h"
#include "powder_snow_bucket_item.h"
#include "powered_rail_item.h"
#include "prismarine_item.h"
#include "prismarine_brick_slab_item.h"
#include "prismarine_brick_stairs_item.h"
#include "prismarine_bricks_item.h"
#include "prismarine_crystals_item.h"
#include "prismarine_shard_item.h"
#include "prismarine_slab_item.h"
#include "prismarine_stairs_item.h"
#include "prismarine_wall_item.h"
#include "pufferfish_item.h"
#include "pufferfish_bucket_item.h"
#include "pufferfish_spawn_egg_item.h"
#include "pumpkin_item.h"
#include "pumpkin_pie_item.h"
#include "pumpkin_seeds_item.h"
#include "purple_banner_item.h"
#include "purple_bed_item.h"
#include "purple_candle_item.h"
#include "purple_carpet_item.h"
#include "purple_concrete_item.h"
#include "purple_concrete_powder_item.h"
#include "purple_dye_item.h"
#include "purple_glazed_terracotta_item.h"
#include "purple_shulker_box_item.h"
#include "purple_stained_glass_item.h"
#include "purple_stained_glass_pane_item.h"
#include "purple_terracotta_item.h"
#include "purple_wool_item.h"
#include "purpur_block_item.h"
#include "purpur_pillar_item.h"
#include "purpur_slab_item.h"
#include "purpur_stairs_item.h"
#include "quartz_item.h"
#include "quartz_block_item.h"
#include "quartz_bricks_item.h"
#include "quartz_pillar_item.h"
#include "quartz_slab_item.h"
#include "quartz_stairs_item.h"
#include "rabbit_item.h"
#include "rabbit_foot_item.h"
#include "rabbit_hide_item.h"
#include "rabbit_spawn_egg_item.h"
#include "rabbit_stew_item.h"
#include "rail_item.h"
#include "ravager_spawn_egg_item.h"
#include "raw_copper_item.h"
#include "raw_copper_block_item.h"
#include "raw_gold_item.h"
#include "raw_gold_block_item.h"
#include "raw_iron_item.h"
#include "raw_iron_block_item.h"
#include "recovery_compass_item.h"
#include "red_banner_item.h"
#include "red_bed_item.h"
#include "red_candle_item.h"
#include "red_carpet_item.h"
#include "red_concrete_item.h"
#include "red_concrete_powder_item.h"
#include "red_dye_item.h"
#include "red_glazed_terracotta_item.h"
#include "red_mushroom_item.h"
#include "red_mushroom_block_item.h"
#include "red_nether_brick_slab_item.h"
#include "red_nether_brick_stairs_item.h"
#include "red_nether_brick_wall_item.h"
#include "red_nether_bricks_item.h"
#include "red_sand_item.h"
#include "red_sandstone_item.h"
#include "red_sandstone_slab_item.h"
#include "red_sandstone_stairs_item.h"
#include "red_sandstone_wall_item.h"
#include "red_shulker_box_item.h"
#include "red_stained_glass_item.h"
#include "red_stained_glass_pane_item.h"
#include "red_terracotta_item.h"
#include "red_tulip_item.h"
#include "red_wool_item.h"
#include "redstone_item.h"
#include "redstone_block_item.h"
#include "redstone_lamp_item.h"
#include "redstone_ore_item.h"
#include "redstone_torch_item.h"
#include "reinforced_deepslate_item.h"
#include "repeater_item.h"
#include "repeating_command_block_item.h"
#include "respawn_anchor_item.h"
#include "rooted_dirt_item.h"
#include "rose_bush_item.h"
#include "rotten_flesh_item.h"
#include "saddle_item.h"
#include "salmon_item.h"
#include "salmon_bucket_item.h"
#include "salmon_spawn_egg_item.h"
#include "sand_item.h"
#include "sandstone_item.h"
#include "sandstone_slab_item.h"
#include "sandstone_stairs_item.h"
#include "sandstone_wall_item.h"
#include "scaffolding_item.h"
#include "sculk_item.h"
#include "sculk_catalyst_item.h"
#include "sculk_sensor_item.h"
#include "sculk_shrieker_item.h"
#include "sculk_vein_item.h"
#include "scute_item.h"
#include "sea_lantern_item.h"
#include "sea_pickle_item.h"
#include "seagrass_item.h"
#include "shears_item.h"
#include "sheep_spawn_egg_item.h"
#include "shield_item.h"
#include "shroomlight_item.h"
#include "shulker_box_item.h"
#include "shulker_shell_item.h"
#include "shulker_spawn_egg_item.h"
#include "silverfish_spawn_egg_item.h"
#include "skeleton_horse_spawn_egg_item.h"
#include "skeleton_skull_item.h"
#include "skeleton_spawn_egg_item.h"
#include "skull_banner_pattern_item.h"
#include "slime_ball_item.h"
#include "slime_block_item.h"
#include "slime_spawn_egg_item.h"
#include "small_amethyst_bud_item.h"
#include "small_dripleaf_item.h"
#include "smithing_table_item.h"
#include "smoker_item.h"
#include "smooth_basalt_item.h"
#include "smooth_quartz_item.h"
#include "smooth_quartz_slab_item.h"
#include "smooth_quartz_stairs_item.h"
#include "smooth_red_sandstone_item.h"
#include "smooth_red_sandstone_slab_item.h"
#include "smooth_red_sandstone_stairs_item.h"
#include "smooth_sandstone_item.h"
#include "smooth_sandstone_slab_item.h"
#include "smooth_sandstone_stairs_item.h"
#include "smooth_stone_item.h"
#include "smooth_stone_slab_item.h"
#include "snow_item.h"
#include "snow_block_item.h"
#include "snowball_item.h"
#include "soul_campfire_item.h"
#include "soul_lantern_item.h"
#include "soul_sand_item.h"
#include "soul_soil_item.h"
#include "soul_torch_item.h"
#include "spawner_item.h"
#include "spectral_arrow_item.h"
#include "spider_eye_item.h"
#include "spider_spawn_egg_item.h"
#include "splash_potion_item.h"
#include "sponge_item.h"
#include "spore_blossom_item.h"
#include "spruce_boat_item.h"
#include "spruce_button_item.h"
#include "spruce_chest_boat_item.h"
#include "spruce_door_item.h"
#include "spruce_fence_item.h"
#include "spruce_fence_gate_item.h"
#include "spruce_leaves_item.h"
#include "spruce_log_item.h"
#include "spruce_planks_item.h"
#include "spruce_pressure_plate_item.h"
#include "spruce_sapling_item.h"
#include "spruce_sign_item.h"
#include "spruce_slab_item.h"
#include "spruce_stairs_item.h"
#include "spruce_trapdoor_item.h"
#include "spruce_wood_item.h"
#include "spyglass_item.h"
#include "squid_spawn_egg_item.h"
#include "stick_item.h"
#include "sticky_piston_item.h"
#include "stone_item.h"
#include "stone_axe_item.h"
#include "stone_brick_slab_item.h"
#include "stone_brick_stairs_item.h"
#include "stone_brick_wall_item.h"
#include "stone_bricks_item.h"
#include "stone_button_item.h"
#include "stone_hoe_item.h"
#include "stone_pickaxe_item.h"
#include "stone_pressure_plate_item.h"
#include "stone_shovel_item.h"
#include "stone_slab_item.h"
#include "stone_stairs_item.h"
#include "stone_sword_item.h"
#include "stonecutter_item.h"
#include "stray_spawn_egg_item.h"
#include "strider_spawn_egg_item.h"
#include "string_item.h"
#include "stripped_acacia_log_item.h"
#include "stripped_acacia_wood_item.h"
#include "stripped_birch_log_item.h"
#include "stripped_birch_wood_item.h"
#include "stripped_crimson_hyphae_item.h"
#include "stripped_crimson_stem_item.h"
#include "stripped_dark_oak_log_item.h"
#include "stripped_dark_oak_wood_item.h"
#include "stripped_jungle_log_item.h"
#include "stripped_jungle_wood_item.h"
#include "stripped_mangrove_log_item.h"
#include "stripped_mangrove_wood_item.h"
#include "stripped_oak_log_item.h"
#include "stripped_oak_wood_item.h"
#include "stripped_spruce_log_item.h"
#include "stripped_spruce_wood_item.h"
#include "stripped_warped_hyphae_item.h"
#include "stripped_warped_stem_item.h"
#include "structure_block_item.h"
#include "structure_void_item.h"
#include "sugar_item.h"
#include "sugar_cane_item.h"
#include "sunflower_item.h"
#include "suspicious_stew_item.h"
#include "sweet_berries_item.h"
#include "tadpole_bucket_item.h"
#include "tadpole_spawn_egg_item.h"
#include "tall_grass_item.h"
#include "target_item.h"
#include "terracotta_item.h"
#include "tinted_glass_item.h"
#include "tipped_arrow_item.h"
#include "tnt_item.h"
#include "tnt_minecart_item.h"
#include "torch_item.h"
#include "totem_of_undying_item.h"
#include "trader_llama_spawn_egg_item.h"
#include "trapped_chest_item.h"
#include "trident_item.h"
#include "tripwire_hook_item.h"
#include "tropical_fish_item.h"
#include "tropical_fish_bucket_item.h"
#include "tropical_fish_spawn_egg_item.h"
#include "tube_coral_item.h"
#include "tube_coral_block_item.h"
#include "tube_coral_fan_item.h"
#include "tuff_item.h"
#include "turtle_egg_item.h"
#include "turtle_helmet_item.h"
#include "turtle_spawn_egg_item.h"
#include "twisting_vines_item.h"
#include "verdant_froglight_item.h"
#include "vex_spawn_egg_item.h"
#include "villager_spawn_egg_item.h"
#include "vindicator_spawn_egg_item.h"
#include "vine_item.h"
#include "wandering_trader_spawn_egg_item.h"
#include "warden_spawn_egg_item.h"
#include "warped_button_item.h"
#include "warped_door_item.h"
#include "warped_fence_item.h"
#include "warped_fence_gate_item.h"
#include "warped_fungus_item.h"
#include "warped_fungus_on_a_stick_item.h"
#include "warped_hyphae_item.h"
#include "warped_nylium_item.h"
#include "warped_planks_item.h"
#include "warped_pressure_plate_item.h"
#include "warped_roots_item.h"
#include "warped_sign_item.h"
#include "warped_slab_item.h"
#include "warped_stairs_item.h"
#include "warped_stem_item.h"
#include "warped_trapdoor_item.h"
#include "warped_wart_block_item.h"
#include "water_bucket_item.h"
#include "waxed_copper_block_item.h"
#include "waxed_cut_copper_item.h"
#include "waxed_cut_copper_slab_item.h"
#include "waxed_cut_copper_stairs_item.h"
#include "waxed_exposed_copper_item.h"
#include "waxed_exposed_cut_copper_item.h"
#include "waxed_exposed_cut_copper_slab_item.h"
#include "waxed_exposed_cut_copper_stairs_item.h"
#include "waxed_oxidized_copper_item.h"
#include "waxed_oxidized_cut_copper_item.h"
#include "waxed_oxidized_cut_copper_slab_item.h"
#include "waxed_oxidized_cut_copper_stairs_item.h"
#include "waxed_weathered_copper_item.h"
#include "waxed_weathered_cut_copper_item.h"
#include "waxed_weathered_cut_copper_slab_item.h"
#include "waxed_weathered_cut_copper_stairs_item.h"
#include "weathered_copper_item.h"
#include "weathered_cut_copper_item.h"
#include "weathered_cut_copper_slab_item.h"
#include "weathered_cut_copper_stairs_item.h"
#include "weeping_vines_item.h"
#include "wet_sponge_item.h"
#include "wheat_item.h"
#include "wheat_seeds_item.h"
#include "white_banner_item.h"
#include "white_bed_item.h"
#include "white_candle_item.h"
#include "white_carpet_item.h"
#include "white_concrete_item.h"
#include "white_concrete_powder_item.h"
#include "white_dye_item.h"
#include "white_glazed_terracotta_item.h"
#include "white_shulker_box_item.h"
#include "white_stained_glass_item.h"
#include "white_stained_glass_pane_item.h"
#include "white_terracotta_item.h"
#include "white_tulip_item.h"
#include "white_wool_item.h"
#include "witch_spawn_egg_item.h"
#include "wither_rose_item.h"
#include "wither_skeleton_skull_item.h"
#include "wither_skeleton_spawn_egg_item.h"
#include "wolf_spawn_egg_item.h"
#include "wooden_axe_item.h"
#include "wooden_hoe_item.h"
#include "wooden_pickaxe_item.h"
#include "wooden_shovel_item.h"
#include "wooden_sword_item.h"
#include "writable_book_item.h"
#include "written_book_item.h"
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
#include "zoglin_spawn_egg_item.h"
#include "zombie_head_item.h"
#include "zombie_horse_spawn_egg_item.h"
#include "zombie_spawn_egg_item.h"
#include "zombie_villager_spawn_egg_item.h"
#include "zombified_piglin_spawn_egg_item.h"

void ItemRegistry::init() {
  registry.resize(1152);

  { // ID: 0
    registry[0] = std::make_shared<AirItem>();
  }

  { // ID: 1
    registry[1] = std::make_shared<StoneItem>();
  }

  { // ID: 2
    registry[2] = std::make_shared<GraniteItem>();
  }

  { // ID: 3
    registry[3] = std::make_shared<PolishedGraniteItem>();
  }

  { // ID: 4
    registry[4] = std::make_shared<DioriteItem>();
  }

  { // ID: 5
    registry[5] = std::make_shared<PolishedDioriteItem>();
  }

  { // ID: 6
    registry[6] = std::make_shared<AndesiteItem>();
  }

  { // ID: 7
    registry[7] = std::make_shared<PolishedAndesiteItem>();
  }

  { // ID: 8
    registry[8] = std::make_shared<DeepslateItem>();
  }

  { // ID: 9
    registry[9] = std::make_shared<CobbledDeepslateItem>();
  }

  { // ID: 10
    registry[10] = std::make_shared<PolishedDeepslateItem>();
  }

  { // ID: 11
    registry[11] = std::make_shared<CalciteItem>();
  }

  { // ID: 12
    registry[12] = std::make_shared<TuffItem>();
  }

  { // ID: 13
    registry[13] = std::make_shared<DripstoneBlockItem>();
  }

  { // ID: 14
    registry[14] = std::make_shared<GrassBlockItem>();
  }

  { // ID: 15
    registry[15] = std::make_shared<DirtItem>();
  }

  { // ID: 16
    registry[16] = std::make_shared<CoarseDirtItem>();
  }

  { // ID: 17
    registry[17] = std::make_shared<PodzolItem>();
  }

  { // ID: 18
    registry[18] = std::make_shared<RootedDirtItem>();
  }

  { // ID: 19
    registry[19] = std::make_shared<MudItem>();
  }

  { // ID: 20
    registry[20] = std::make_shared<CrimsonNyliumItem>();
  }

  { // ID: 21
    registry[21] = std::make_shared<WarpedNyliumItem>();
  }

  { // ID: 22
    registry[22] = std::make_shared<CobblestoneItem>();
  }

  { // ID: 23
    registry[23] = std::make_shared<OakPlanksItem>();
  }

  { // ID: 24
    registry[24] = std::make_shared<SprucePlanksItem>();
  }

  { // ID: 25
    registry[25] = std::make_shared<BirchPlanksItem>();
  }

  { // ID: 26
    registry[26] = std::make_shared<JunglePlanksItem>();
  }

  { // ID: 27
    registry[27] = std::make_shared<AcaciaPlanksItem>();
  }

  { // ID: 28
    registry[28] = std::make_shared<DarkOakPlanksItem>();
  }

  { // ID: 29
    registry[29] = std::make_shared<MangrovePlanksItem>();
  }

  { // ID: 30
    registry[30] = std::make_shared<CrimsonPlanksItem>();
  }

  { // ID: 31
    registry[31] = std::make_shared<WarpedPlanksItem>();
  }

  { // ID: 32
    registry[32] = std::make_shared<OakSaplingItem>();
  }

  { // ID: 33
    registry[33] = std::make_shared<SpruceSaplingItem>();
  }

  { // ID: 34
    registry[34] = std::make_shared<BirchSaplingItem>();
  }

  { // ID: 35
    registry[35] = std::make_shared<JungleSaplingItem>();
  }

  { // ID: 36
    registry[36] = std::make_shared<AcaciaSaplingItem>();
  }

  { // ID: 37
    registry[37] = std::make_shared<DarkOakSaplingItem>();
  }

  { // ID: 38
    registry[38] = std::make_shared<MangrovePropaguleItem>();
  }

  { // ID: 39
    registry[39] = std::make_shared<BedrockItem>();
  }

  { // ID: 40
    registry[40] = std::make_shared<SandItem>();
  }

  { // ID: 41
    registry[41] = std::make_shared<RedSandItem>();
  }

  { // ID: 42
    registry[42] = std::make_shared<GravelItem>();
  }

  { // ID: 43
    registry[43] = std::make_shared<CoalOreItem>();
  }

  { // ID: 44
    registry[44] = std::make_shared<DeepslateCoalOreItem>();
  }

  { // ID: 45
    registry[45] = std::make_shared<IronOreItem>();
  }

  { // ID: 46
    registry[46] = std::make_shared<DeepslateIronOreItem>();
  }

  { // ID: 47
    registry[47] = std::make_shared<CopperOreItem>();
  }

  { // ID: 48
    registry[48] = std::make_shared<DeepslateCopperOreItem>();
  }

  { // ID: 49
    registry[49] = std::make_shared<GoldOreItem>();
  }

  { // ID: 50
    registry[50] = std::make_shared<DeepslateGoldOreItem>();
  }

  { // ID: 51
    registry[51] = std::make_shared<RedstoneOreItem>();
  }

  { // ID: 52
    registry[52] = std::make_shared<DeepslateRedstoneOreItem>();
  }

  { // ID: 53
    registry[53] = std::make_shared<EmeraldOreItem>();
  }

  { // ID: 54
    registry[54] = std::make_shared<DeepslateEmeraldOreItem>();
  }

  { // ID: 55
    registry[55] = std::make_shared<LapisOreItem>();
  }

  { // ID: 56
    registry[56] = std::make_shared<DeepslateLapisOreItem>();
  }

  { // ID: 57
    registry[57] = std::make_shared<DiamondOreItem>();
  }

  { // ID: 58
    registry[58] = std::make_shared<DeepslateDiamondOreItem>();
  }

  { // ID: 59
    registry[59] = std::make_shared<NetherGoldOreItem>();
  }

  { // ID: 60
    registry[60] = std::make_shared<NetherQuartzOreItem>();
  }

  { // ID: 61
    registry[61] = std::make_shared<AncientDebrisItem>();
  }

  { // ID: 62
    registry[62] = std::make_shared<CoalBlockItem>();
  }

  { // ID: 63
    registry[63] = std::make_shared<RawIronBlockItem>();
  }

  { // ID: 64
    registry[64] = std::make_shared<RawCopperBlockItem>();
  }

  { // ID: 65
    registry[65] = std::make_shared<RawGoldBlockItem>();
  }

  { // ID: 66
    registry[66] = std::make_shared<AmethystBlockItem>();
  }

  { // ID: 67
    registry[67] = std::make_shared<BuddingAmethystItem>();
  }

  { // ID: 68
    registry[68] = std::make_shared<IronBlockItem>();
  }

  { // ID: 69
    registry[69] = std::make_shared<CopperBlockItem>();
  }

  { // ID: 70
    registry[70] = std::make_shared<GoldBlockItem>();
  }

  { // ID: 71
    registry[71] = std::make_shared<DiamondBlockItem>();
  }

  { // ID: 72
    registry[72] = std::make_shared<NetheriteBlockItem>();
  }

  { // ID: 73
    registry[73] = std::make_shared<ExposedCopperItem>();
  }

  { // ID: 74
    registry[74] = std::make_shared<WeatheredCopperItem>();
  }

  { // ID: 75
    registry[75] = std::make_shared<OxidizedCopperItem>();
  }

  { // ID: 76
    registry[76] = std::make_shared<CutCopperItem>();
  }

  { // ID: 77
    registry[77] = std::make_shared<ExposedCutCopperItem>();
  }

  { // ID: 78
    registry[78] = std::make_shared<WeatheredCutCopperItem>();
  }

  { // ID: 79
    registry[79] = std::make_shared<OxidizedCutCopperItem>();
  }

  { // ID: 80
    registry[80] = std::make_shared<CutCopperStairsItem>();
  }

  { // ID: 81
    registry[81] = std::make_shared<ExposedCutCopperStairsItem>();
  }

  { // ID: 82
    registry[82] = std::make_shared<WeatheredCutCopperStairsItem>();
  }

  { // ID: 83
    registry[83] = std::make_shared<OxidizedCutCopperStairsItem>();
  }

  { // ID: 84
    registry[84] = std::make_shared<CutCopperSlabItem>();
  }

  { // ID: 85
    registry[85] = std::make_shared<ExposedCutCopperSlabItem>();
  }

  { // ID: 86
    registry[86] = std::make_shared<WeatheredCutCopperSlabItem>();
  }

  { // ID: 87
    registry[87] = std::make_shared<OxidizedCutCopperSlabItem>();
  }

  { // ID: 88
    registry[88] = std::make_shared<WaxedCopperBlockItem>();
  }

  { // ID: 89
    registry[89] = std::make_shared<WaxedExposedCopperItem>();
  }

  { // ID: 90
    registry[90] = std::make_shared<WaxedWeatheredCopperItem>();
  }

  { // ID: 91
    registry[91] = std::make_shared<WaxedOxidizedCopperItem>();
  }

  { // ID: 92
    registry[92] = std::make_shared<WaxedCutCopperItem>();
  }

  { // ID: 93
    registry[93] = std::make_shared<WaxedExposedCutCopperItem>();
  }

  { // ID: 94
    registry[94] = std::make_shared<WaxedWeatheredCutCopperItem>();
  }

  { // ID: 95
    registry[95] = std::make_shared<WaxedOxidizedCutCopperItem>();
  }

  { // ID: 96
    registry[96] = std::make_shared<WaxedCutCopperStairsItem>();
  }

  { // ID: 97
    registry[97] = std::make_shared<WaxedExposedCutCopperStairsItem>();
  }

  { // ID: 98
    registry[98] = std::make_shared<WaxedWeatheredCutCopperStairsItem>();
  }

  { // ID: 99
    registry[99] = std::make_shared<WaxedOxidizedCutCopperStairsItem>();
  }

  { // ID: 100
    registry[100] = std::make_shared<WaxedCutCopperSlabItem>();
  }

  { // ID: 101
    registry[101] = std::make_shared<WaxedExposedCutCopperSlabItem>();
  }

  { // ID: 102
    registry[102] = std::make_shared<WaxedWeatheredCutCopperSlabItem>();
  }

  { // ID: 103
    registry[103] = std::make_shared<WaxedOxidizedCutCopperSlabItem>();
  }

  { // ID: 104
    registry[104] = std::make_shared<OakLogItem>();
  }

  { // ID: 105
    registry[105] = std::make_shared<SpruceLogItem>();
  }

  { // ID: 106
    registry[106] = std::make_shared<BirchLogItem>();
  }

  { // ID: 107
    registry[107] = std::make_shared<JungleLogItem>();
  }

  { // ID: 108
    registry[108] = std::make_shared<AcaciaLogItem>();
  }

  { // ID: 109
    registry[109] = std::make_shared<DarkOakLogItem>();
  }

  { // ID: 110
    registry[110] = std::make_shared<MangroveLogItem>();
  }

  { // ID: 111
    registry[111] = std::make_shared<MangroveRootsItem>();
  }

  { // ID: 112
    registry[112] = std::make_shared<MuddyMangroveRootsItem>();
  }

  { // ID: 113
    registry[113] = std::make_shared<CrimsonStemItem>();
  }

  { // ID: 114
    registry[114] = std::make_shared<WarpedStemItem>();
  }

  { // ID: 115
    registry[115] = std::make_shared<StrippedOakLogItem>();
  }

  { // ID: 116
    registry[116] = std::make_shared<StrippedSpruceLogItem>();
  }

  { // ID: 117
    registry[117] = std::make_shared<StrippedBirchLogItem>();
  }

  { // ID: 118
    registry[118] = std::make_shared<StrippedJungleLogItem>();
  }

  { // ID: 119
    registry[119] = std::make_shared<StrippedAcaciaLogItem>();
  }

  { // ID: 120
    registry[120] = std::make_shared<StrippedDarkOakLogItem>();
  }

  { // ID: 121
    registry[121] = std::make_shared<StrippedMangroveLogItem>();
  }

  { // ID: 122
    registry[122] = std::make_shared<StrippedCrimsonStemItem>();
  }

  { // ID: 123
    registry[123] = std::make_shared<StrippedWarpedStemItem>();
  }

  { // ID: 124
    registry[124] = std::make_shared<StrippedOakWoodItem>();
  }

  { // ID: 125
    registry[125] = std::make_shared<StrippedSpruceWoodItem>();
  }

  { // ID: 126
    registry[126] = std::make_shared<StrippedBirchWoodItem>();
  }

  { // ID: 127
    registry[127] = std::make_shared<StrippedJungleWoodItem>();
  }

  { // ID: 128
    registry[128] = std::make_shared<StrippedAcaciaWoodItem>();
  }

  { // ID: 129
    registry[129] = std::make_shared<StrippedDarkOakWoodItem>();
  }

  { // ID: 130
    registry[130] = std::make_shared<StrippedMangroveWoodItem>();
  }

  { // ID: 131
    registry[131] = std::make_shared<StrippedCrimsonHyphaeItem>();
  }

  { // ID: 132
    registry[132] = std::make_shared<StrippedWarpedHyphaeItem>();
  }

  { // ID: 133
    registry[133] = std::make_shared<OakWoodItem>();
  }

  { // ID: 134
    registry[134] = std::make_shared<SpruceWoodItem>();
  }

  { // ID: 135
    registry[135] = std::make_shared<BirchWoodItem>();
  }

  { // ID: 136
    registry[136] = std::make_shared<JungleWoodItem>();
  }

  { // ID: 137
    registry[137] = std::make_shared<AcaciaWoodItem>();
  }

  { // ID: 138
    registry[138] = std::make_shared<DarkOakWoodItem>();
  }

  { // ID: 139
    registry[139] = std::make_shared<MangroveWoodItem>();
  }

  { // ID: 140
    registry[140] = std::make_shared<CrimsonHyphaeItem>();
  }

  { // ID: 141
    registry[141] = std::make_shared<WarpedHyphaeItem>();
  }

  { // ID: 142
    registry[142] = std::make_shared<OakLeavesItem>();
  }

  { // ID: 143
    registry[143] = std::make_shared<SpruceLeavesItem>();
  }

  { // ID: 144
    registry[144] = std::make_shared<BirchLeavesItem>();
  }

  { // ID: 145
    registry[145] = std::make_shared<JungleLeavesItem>();
  }

  { // ID: 146
    registry[146] = std::make_shared<AcaciaLeavesItem>();
  }

  { // ID: 147
    registry[147] = std::make_shared<DarkOakLeavesItem>();
  }

  { // ID: 148
    registry[148] = std::make_shared<MangroveLeavesItem>();
  }

  { // ID: 149
    registry[149] = std::make_shared<AzaleaLeavesItem>();
  }

  { // ID: 150
    registry[150] = std::make_shared<FloweringAzaleaLeavesItem>();
  }

  { // ID: 151
    registry[151] = std::make_shared<SpongeItem>();
  }

  { // ID: 152
    registry[152] = std::make_shared<WetSpongeItem>();
  }

  { // ID: 153
    registry[153] = std::make_shared<GlassItem>();
  }

  { // ID: 154
    registry[154] = std::make_shared<TintedGlassItem>();
  }

  { // ID: 155
    registry[155] = std::make_shared<LapisBlockItem>();
  }

  { // ID: 156
    registry[156] = std::make_shared<SandstoneItem>();
  }

  { // ID: 157
    registry[157] = std::make_shared<ChiseledSandstoneItem>();
  }

  { // ID: 158
    registry[158] = std::make_shared<CutSandstoneItem>();
  }

  { // ID: 159
    registry[159] = std::make_shared<CobwebItem>();
  }

  { // ID: 160
    registry[160] = std::make_shared<GrassItem>();
  }

  { // ID: 161
    registry[161] = std::make_shared<FernItem>();
  }

  { // ID: 162
    registry[162] = std::make_shared<AzaleaItem>();
  }

  { // ID: 163
    registry[163] = std::make_shared<FloweringAzaleaItem>();
  }

  { // ID: 164
    registry[164] = std::make_shared<DeadBushItem>();
  }

  { // ID: 165
    registry[165] = std::make_shared<SeagrassItem>();
  }

  { // ID: 166
    registry[166] = std::make_shared<SeaPickleItem>();
  }

  { // ID: 167
    registry[167] = std::make_shared<WhiteWoolItem>();
  }

  { // ID: 168
    registry[168] = std::make_shared<OrangeWoolItem>();
  }

  { // ID: 169
    registry[169] = std::make_shared<MagentaWoolItem>();
  }

  { // ID: 170
    registry[170] = std::make_shared<LightBlueWoolItem>();
  }

  { // ID: 171
    registry[171] = std::make_shared<YellowWoolItem>();
  }

  { // ID: 172
    registry[172] = std::make_shared<LimeWoolItem>();
  }

  { // ID: 173
    registry[173] = std::make_shared<PinkWoolItem>();
  }

  { // ID: 174
    registry[174] = std::make_shared<GrayWoolItem>();
  }

  { // ID: 175
    registry[175] = std::make_shared<LightGrayWoolItem>();
  }

  { // ID: 176
    registry[176] = std::make_shared<CyanWoolItem>();
  }

  { // ID: 177
    registry[177] = std::make_shared<PurpleWoolItem>();
  }

  { // ID: 178
    registry[178] = std::make_shared<BlueWoolItem>();
  }

  { // ID: 179
    registry[179] = std::make_shared<BrownWoolItem>();
  }

  { // ID: 180
    registry[180] = std::make_shared<GreenWoolItem>();
  }

  { // ID: 181
    registry[181] = std::make_shared<RedWoolItem>();
  }

  { // ID: 182
    registry[182] = std::make_shared<BlackWoolItem>();
  }

  { // ID: 183
    registry[183] = std::make_shared<DandelionItem>();
  }

  { // ID: 184
    registry[184] = std::make_shared<PoppyItem>();
  }

  { // ID: 185
    registry[185] = std::make_shared<BlueOrchidItem>();
  }

  { // ID: 186
    registry[186] = std::make_shared<AlliumItem>();
  }

  { // ID: 187
    registry[187] = std::make_shared<AzureBluetItem>();
  }

  { // ID: 188
    registry[188] = std::make_shared<RedTulipItem>();
  }

  { // ID: 189
    registry[189] = std::make_shared<OrangeTulipItem>();
  }

  { // ID: 190
    registry[190] = std::make_shared<WhiteTulipItem>();
  }

  { // ID: 191
    registry[191] = std::make_shared<PinkTulipItem>();
  }

  { // ID: 192
    registry[192] = std::make_shared<OxeyeDaisyItem>();
  }

  { // ID: 193
    registry[193] = std::make_shared<CornflowerItem>();
  }

  { // ID: 194
    registry[194] = std::make_shared<LilyOfTheValleyItem>();
  }

  { // ID: 195
    registry[195] = std::make_shared<WitherRoseItem>();
  }

  { // ID: 196
    registry[196] = std::make_shared<SporeBlossomItem>();
  }

  { // ID: 197
    registry[197] = std::make_shared<BrownMushroomItem>();
  }

  { // ID: 198
    registry[198] = std::make_shared<RedMushroomItem>();
  }

  { // ID: 199
    registry[199] = std::make_shared<CrimsonFungusItem>();
  }

  { // ID: 200
    registry[200] = std::make_shared<WarpedFungusItem>();
  }

  { // ID: 201
    registry[201] = std::make_shared<CrimsonRootsItem>();
  }

  { // ID: 202
    registry[202] = std::make_shared<WarpedRootsItem>();
  }

  { // ID: 203
    registry[203] = std::make_shared<NetherSproutsItem>();
  }

  { // ID: 204
    registry[204] = std::make_shared<WeepingVinesItem>();
  }

  { // ID: 205
    registry[205] = std::make_shared<TwistingVinesItem>();
  }

  { // ID: 206
    registry[206] = std::make_shared<SugarCaneItem>();
  }

  { // ID: 207
    registry[207] = std::make_shared<KelpItem>();
  }

  { // ID: 208
    registry[208] = std::make_shared<MossCarpetItem>();
  }

  { // ID: 209
    registry[209] = std::make_shared<MossBlockItem>();
  }

  { // ID: 210
    registry[210] = std::make_shared<HangingRootsItem>();
  }

  { // ID: 211
    registry[211] = std::make_shared<BigDripleafItem>();
  }

  { // ID: 212
    registry[212] = std::make_shared<SmallDripleafItem>();
  }

  { // ID: 213
    registry[213] = std::make_shared<BambooItem>();
  }

  { // ID: 214
    registry[214] = std::make_shared<OakSlabItem>();
  }

  { // ID: 215
    registry[215] = std::make_shared<SpruceSlabItem>();
  }

  { // ID: 216
    registry[216] = std::make_shared<BirchSlabItem>();
  }

  { // ID: 217
    registry[217] = std::make_shared<JungleSlabItem>();
  }

  { // ID: 218
    registry[218] = std::make_shared<AcaciaSlabItem>();
  }

  { // ID: 219
    registry[219] = std::make_shared<DarkOakSlabItem>();
  }

  { // ID: 220
    registry[220] = std::make_shared<MangroveSlabItem>();
  }

  { // ID: 221
    registry[221] = std::make_shared<CrimsonSlabItem>();
  }

  { // ID: 222
    registry[222] = std::make_shared<WarpedSlabItem>();
  }

  { // ID: 223
    registry[223] = std::make_shared<StoneSlabItem>();
  }

  { // ID: 224
    registry[224] = std::make_shared<SmoothStoneSlabItem>();
  }

  { // ID: 225
    registry[225] = std::make_shared<SandstoneSlabItem>();
  }

  { // ID: 226
    registry[226] = std::make_shared<CutSandstoneSlabItem>();
  }

  { // ID: 227
    registry[227] = std::make_shared<PetrifiedOakSlabItem>();
  }

  { // ID: 228
    registry[228] = std::make_shared<CobblestoneSlabItem>();
  }

  { // ID: 229
    registry[229] = std::make_shared<BrickSlabItem>();
  }

  { // ID: 230
    registry[230] = std::make_shared<StoneBrickSlabItem>();
  }

  { // ID: 231
    registry[231] = std::make_shared<MudBrickSlabItem>();
  }

  { // ID: 232
    registry[232] = std::make_shared<NetherBrickSlabItem>();
  }

  { // ID: 233
    registry[233] = std::make_shared<QuartzSlabItem>();
  }

  { // ID: 234
    registry[234] = std::make_shared<RedSandstoneSlabItem>();
  }

  { // ID: 235
    registry[235] = std::make_shared<CutRedSandstoneSlabItem>();
  }

  { // ID: 236
    registry[236] = std::make_shared<PurpurSlabItem>();
  }

  { // ID: 237
    registry[237] = std::make_shared<PrismarineSlabItem>();
  }

  { // ID: 238
    registry[238] = std::make_shared<PrismarineBrickSlabItem>();
  }

  { // ID: 239
    registry[239] = std::make_shared<DarkPrismarineSlabItem>();
  }

  { // ID: 240
    registry[240] = std::make_shared<SmoothQuartzItem>();
  }

  { // ID: 241
    registry[241] = std::make_shared<SmoothRedSandstoneItem>();
  }

  { // ID: 242
    registry[242] = std::make_shared<SmoothSandstoneItem>();
  }

  { // ID: 243
    registry[243] = std::make_shared<SmoothStoneItem>();
  }

  { // ID: 244
    registry[244] = std::make_shared<BricksItem>();
  }

  { // ID: 245
    registry[245] = std::make_shared<BookshelfItem>();
  }

  { // ID: 246
    registry[246] = std::make_shared<MossyCobblestoneItem>();
  }

  { // ID: 247
    registry[247] = std::make_shared<ObsidianItem>();
  }

  { // ID: 248
    registry[248] = std::make_shared<TorchItem>();
  }

  { // ID: 249
    registry[249] = std::make_shared<EndRodItem>();
  }

  { // ID: 250
    registry[250] = std::make_shared<ChorusPlantItem>();
  }

  { // ID: 251
    registry[251] = std::make_shared<ChorusFlowerItem>();
  }

  { // ID: 252
    registry[252] = std::make_shared<PurpurBlockItem>();
  }

  { // ID: 253
    registry[253] = std::make_shared<PurpurPillarItem>();
  }

  { // ID: 254
    registry[254] = std::make_shared<PurpurStairsItem>();
  }

  { // ID: 255
    registry[255] = std::make_shared<SpawnerItem>();
  }

  { // ID: 256
    registry[256] = std::make_shared<ChestItem>();
  }

  { // ID: 257
    registry[257] = std::make_shared<CraftingTableItem>();
  }

  { // ID: 258
    registry[258] = std::make_shared<FarmlandItem>();
  }

  { // ID: 259
    registry[259] = std::make_shared<FurnaceItem>();
  }

  { // ID: 260
    registry[260] = std::make_shared<LadderItem>();
  }

  { // ID: 261
    registry[261] = std::make_shared<CobblestoneStairsItem>();
  }

  { // ID: 262
    registry[262] = std::make_shared<SnowItem>();
  }

  { // ID: 263
    registry[263] = std::make_shared<IceItem>();
  }

  { // ID: 264
    registry[264] = std::make_shared<SnowBlockItem>();
  }

  { // ID: 265
    registry[265] = std::make_shared<CactusItem>();
  }

  { // ID: 266
    registry[266] = std::make_shared<ClayItem>();
  }

  { // ID: 267
    registry[267] = std::make_shared<JukeboxItem>();
  }

  { // ID: 268
    registry[268] = std::make_shared<OakFenceItem>();
  }

  { // ID: 269
    registry[269] = std::make_shared<SpruceFenceItem>();
  }

  { // ID: 270
    registry[270] = std::make_shared<BirchFenceItem>();
  }

  { // ID: 271
    registry[271] = std::make_shared<JungleFenceItem>();
  }

  { // ID: 272
    registry[272] = std::make_shared<AcaciaFenceItem>();
  }

  { // ID: 273
    registry[273] = std::make_shared<DarkOakFenceItem>();
  }

  { // ID: 274
    registry[274] = std::make_shared<MangroveFenceItem>();
  }

  { // ID: 275
    registry[275] = std::make_shared<CrimsonFenceItem>();
  }

  { // ID: 276
    registry[276] = std::make_shared<WarpedFenceItem>();
  }

  { // ID: 277
    registry[277] = std::make_shared<PumpkinItem>();
  }

  { // ID: 278
    registry[278] = std::make_shared<CarvedPumpkinItem>();
  }

  { // ID: 279
    registry[279] = std::make_shared<JackOLanternItem>();
  }

  { // ID: 280
    registry[280] = std::make_shared<NetherrackItem>();
  }

  { // ID: 281
    registry[281] = std::make_shared<SoulSandItem>();
  }

  { // ID: 282
    registry[282] = std::make_shared<SoulSoilItem>();
  }

  { // ID: 283
    registry[283] = std::make_shared<BasaltItem>();
  }

  { // ID: 284
    registry[284] = std::make_shared<PolishedBasaltItem>();
  }

  { // ID: 285
    registry[285] = std::make_shared<SmoothBasaltItem>();
  }

  { // ID: 286
    registry[286] = std::make_shared<SoulTorchItem>();
  }

  { // ID: 287
    registry[287] = std::make_shared<GlowstoneItem>();
  }

  { // ID: 288
    registry[288] = std::make_shared<InfestedStoneItem>();
  }

  { // ID: 289
    registry[289] = std::make_shared<InfestedCobblestoneItem>();
  }

  { // ID: 290
    registry[290] = std::make_shared<InfestedStoneBricksItem>();
  }

  { // ID: 291
    registry[291] = std::make_shared<InfestedMossyStoneBricksItem>();
  }

  { // ID: 292
    registry[292] = std::make_shared<InfestedCrackedStoneBricksItem>();
  }

  { // ID: 293
    registry[293] = std::make_shared<InfestedChiseledStoneBricksItem>();
  }

  { // ID: 294
    registry[294] = std::make_shared<InfestedDeepslateItem>();
  }

  { // ID: 295
    registry[295] = std::make_shared<StoneBricksItem>();
  }

  { // ID: 296
    registry[296] = std::make_shared<MossyStoneBricksItem>();
  }

  { // ID: 297
    registry[297] = std::make_shared<CrackedStoneBricksItem>();
  }

  { // ID: 298
    registry[298] = std::make_shared<ChiseledStoneBricksItem>();
  }

  { // ID: 299
    registry[299] = std::make_shared<PackedMudItem>();
  }

  { // ID: 300
    registry[300] = std::make_shared<MudBricksItem>();
  }

  { // ID: 301
    registry[301] = std::make_shared<DeepslateBricksItem>();
  }

  { // ID: 302
    registry[302] = std::make_shared<CrackedDeepslateBricksItem>();
  }

  { // ID: 303
    registry[303] = std::make_shared<DeepslateTilesItem>();
  }

  { // ID: 304
    registry[304] = std::make_shared<CrackedDeepslateTilesItem>();
  }

  { // ID: 305
    registry[305] = std::make_shared<ChiseledDeepslateItem>();
  }

  { // ID: 306
    registry[306] = std::make_shared<ReinforcedDeepslateItem>();
  }

  { // ID: 307
    registry[307] = std::make_shared<BrownMushroomBlockItem>();
  }

  { // ID: 308
    registry[308] = std::make_shared<RedMushroomBlockItem>();
  }

  { // ID: 309
    registry[309] = std::make_shared<MushroomStemItem>();
  }

  { // ID: 310
    registry[310] = std::make_shared<IronBarsItem>();
  }

  { // ID: 311
    registry[311] = std::make_shared<ChainItem>();
  }

  { // ID: 312
    registry[312] = std::make_shared<GlassPaneItem>();
  }

  { // ID: 313
    registry[313] = std::make_shared<MelonItem>();
  }

  { // ID: 314
    registry[314] = std::make_shared<VineItem>();
  }

  { // ID: 315
    registry[315] = std::make_shared<GlowLichenItem>();
  }

  { // ID: 316
    registry[316] = std::make_shared<BrickStairsItem>();
  }

  { // ID: 317
    registry[317] = std::make_shared<StoneBrickStairsItem>();
  }

  { // ID: 318
    registry[318] = std::make_shared<MudBrickStairsItem>();
  }

  { // ID: 319
    registry[319] = std::make_shared<MyceliumItem>();
  }

  { // ID: 320
    registry[320] = std::make_shared<LilyPadItem>();
  }

  { // ID: 321
    registry[321] = std::make_shared<NetherBricksItem>();
  }

  { // ID: 322
    registry[322] = std::make_shared<CrackedNetherBricksItem>();
  }

  { // ID: 323
    registry[323] = std::make_shared<ChiseledNetherBricksItem>();
  }

  { // ID: 324
    registry[324] = std::make_shared<NetherBrickFenceItem>();
  }

  { // ID: 325
    registry[325] = std::make_shared<NetherBrickStairsItem>();
  }

  { // ID: 326
    registry[326] = std::make_shared<SculkItem>();
  }

  { // ID: 327
    registry[327] = std::make_shared<SculkVeinItem>();
  }

  { // ID: 328
    registry[328] = std::make_shared<SculkCatalystItem>();
  }

  { // ID: 329
    registry[329] = std::make_shared<SculkShriekerItem>();
  }

  { // ID: 330
    registry[330] = std::make_shared<EnchantingTableItem>();
  }

  { // ID: 331
    registry[331] = std::make_shared<EndPortalFrameItem>();
  }

  { // ID: 332
    registry[332] = std::make_shared<EndStoneItem>();
  }

  { // ID: 333
    registry[333] = std::make_shared<EndStoneBricksItem>();
  }

  { // ID: 334
    registry[334] = std::make_shared<DragonEggItem>();
  }

  { // ID: 335
    registry[335] = std::make_shared<SandstoneStairsItem>();
  }

  { // ID: 336
    registry[336] = std::make_shared<EnderChestItem>();
  }

  { // ID: 337
    registry[337] = std::make_shared<EmeraldBlockItem>();
  }

  { // ID: 338
    registry[338] = std::make_shared<OakStairsItem>();
  }

  { // ID: 339
    registry[339] = std::make_shared<SpruceStairsItem>();
  }

  { // ID: 340
    registry[340] = std::make_shared<BirchStairsItem>();
  }

  { // ID: 341
    registry[341] = std::make_shared<JungleStairsItem>();
  }

  { // ID: 342
    registry[342] = std::make_shared<AcaciaStairsItem>();
  }

  { // ID: 343
    registry[343] = std::make_shared<DarkOakStairsItem>();
  }

  { // ID: 344
    registry[344] = std::make_shared<MangroveStairsItem>();
  }

  { // ID: 345
    registry[345] = std::make_shared<CrimsonStairsItem>();
  }

  { // ID: 346
    registry[346] = std::make_shared<WarpedStairsItem>();
  }

  { // ID: 347
    registry[347] = std::make_shared<CommandBlockItem>();
  }

  { // ID: 348
    registry[348] = std::make_shared<BeaconItem>();
  }

  { // ID: 349
    registry[349] = std::make_shared<CobblestoneWallItem>();
  }

  { // ID: 350
    registry[350] = std::make_shared<MossyCobblestoneWallItem>();
  }

  { // ID: 351
    registry[351] = std::make_shared<BrickWallItem>();
  }

  { // ID: 352
    registry[352] = std::make_shared<PrismarineWallItem>();
  }

  { // ID: 353
    registry[353] = std::make_shared<RedSandstoneWallItem>();
  }

  { // ID: 354
    registry[354] = std::make_shared<MossyStoneBrickWallItem>();
  }

  { // ID: 355
    registry[355] = std::make_shared<GraniteWallItem>();
  }

  { // ID: 356
    registry[356] = std::make_shared<StoneBrickWallItem>();
  }

  { // ID: 357
    registry[357] = std::make_shared<MudBrickWallItem>();
  }

  { // ID: 358
    registry[358] = std::make_shared<NetherBrickWallItem>();
  }

  { // ID: 359
    registry[359] = std::make_shared<AndesiteWallItem>();
  }

  { // ID: 360
    registry[360] = std::make_shared<RedNetherBrickWallItem>();
  }

  { // ID: 361
    registry[361] = std::make_shared<SandstoneWallItem>();
  }

  { // ID: 362
    registry[362] = std::make_shared<EndStoneBrickWallItem>();
  }

  { // ID: 363
    registry[363] = std::make_shared<DioriteWallItem>();
  }

  { // ID: 364
    registry[364] = std::make_shared<BlackstoneWallItem>();
  }

  { // ID: 365
    registry[365] = std::make_shared<PolishedBlackstoneWallItem>();
  }

  { // ID: 366
    registry[366] = std::make_shared<PolishedBlackstoneBrickWallItem>();
  }

  { // ID: 367
    registry[367] = std::make_shared<CobbledDeepslateWallItem>();
  }

  { // ID: 368
    registry[368] = std::make_shared<PolishedDeepslateWallItem>();
  }

  { // ID: 369
    registry[369] = std::make_shared<DeepslateBrickWallItem>();
  }

  { // ID: 370
    registry[370] = std::make_shared<DeepslateTileWallItem>();
  }

  { // ID: 371
    registry[371] = std::make_shared<AnvilItem>();
  }

  { // ID: 372
    registry[372] = std::make_shared<ChippedAnvilItem>();
  }

  { // ID: 373
    registry[373] = std::make_shared<DamagedAnvilItem>();
  }

  { // ID: 374
    registry[374] = std::make_shared<ChiseledQuartzBlockItem>();
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

  { // ID: 379
    registry[379] = std::make_shared<WhiteTerracottaItem>();
  }

  { // ID: 380
    registry[380] = std::make_shared<OrangeTerracottaItem>();
  }

  { // ID: 381
    registry[381] = std::make_shared<MagentaTerracottaItem>();
  }

  { // ID: 382
    registry[382] = std::make_shared<LightBlueTerracottaItem>();
  }

  { // ID: 383
    registry[383] = std::make_shared<YellowTerracottaItem>();
  }

  { // ID: 384
    registry[384] = std::make_shared<LimeTerracottaItem>();
  }

  { // ID: 385
    registry[385] = std::make_shared<PinkTerracottaItem>();
  }

  { // ID: 386
    registry[386] = std::make_shared<GrayTerracottaItem>();
  }

  { // ID: 387
    registry[387] = std::make_shared<LightGrayTerracottaItem>();
  }

  { // ID: 388
    registry[388] = std::make_shared<CyanTerracottaItem>();
  }

  { // ID: 389
    registry[389] = std::make_shared<PurpleTerracottaItem>();
  }

  { // ID: 390
    registry[390] = std::make_shared<BlueTerracottaItem>();
  }

  { // ID: 391
    registry[391] = std::make_shared<BrownTerracottaItem>();
  }

  { // ID: 392
    registry[392] = std::make_shared<GreenTerracottaItem>();
  }

  { // ID: 393
    registry[393] = std::make_shared<RedTerracottaItem>();
  }

  { // ID: 394
    registry[394] = std::make_shared<BlackTerracottaItem>();
  }

  { // ID: 395
    registry[395] = std::make_shared<BarrierItem>();
  }

  { // ID: 396
    registry[396] = std::make_shared<LightItem>();
  }

  { // ID: 397
    registry[397] = std::make_shared<HayBlockItem>();
  }

  { // ID: 398
    registry[398] = std::make_shared<WhiteCarpetItem>();
  }

  { // ID: 399
    registry[399] = std::make_shared<OrangeCarpetItem>();
  }

  { // ID: 400
    registry[400] = std::make_shared<MagentaCarpetItem>();
  }

  { // ID: 401
    registry[401] = std::make_shared<LightBlueCarpetItem>();
  }

  { // ID: 402
    registry[402] = std::make_shared<YellowCarpetItem>();
  }

  { // ID: 403
    registry[403] = std::make_shared<LimeCarpetItem>();
  }

  { // ID: 404
    registry[404] = std::make_shared<PinkCarpetItem>();
  }

  { // ID: 405
    registry[405] = std::make_shared<GrayCarpetItem>();
  }

  { // ID: 406
    registry[406] = std::make_shared<LightGrayCarpetItem>();
  }

  { // ID: 407
    registry[407] = std::make_shared<CyanCarpetItem>();
  }

  { // ID: 408
    registry[408] = std::make_shared<PurpleCarpetItem>();
  }

  { // ID: 409
    registry[409] = std::make_shared<BlueCarpetItem>();
  }

  { // ID: 410
    registry[410] = std::make_shared<BrownCarpetItem>();
  }

  { // ID: 411
    registry[411] = std::make_shared<GreenCarpetItem>();
  }

  { // ID: 412
    registry[412] = std::make_shared<RedCarpetItem>();
  }

  { // ID: 413
    registry[413] = std::make_shared<BlackCarpetItem>();
  }

  { // ID: 414
    registry[414] = std::make_shared<TerracottaItem>();
  }

  { // ID: 415
    registry[415] = std::make_shared<PackedIceItem>();
  }

  { // ID: 416
    registry[416] = std::make_shared<DirtPathItem>();
  }

  { // ID: 417
    registry[417] = std::make_shared<SunflowerItem>();
  }

  { // ID: 418
    registry[418] = std::make_shared<LilacItem>();
  }

  { // ID: 419
    registry[419] = std::make_shared<RoseBushItem>();
  }

  { // ID: 420
    registry[420] = std::make_shared<PeonyItem>();
  }

  { // ID: 421
    registry[421] = std::make_shared<TallGrassItem>();
  }

  { // ID: 422
    registry[422] = std::make_shared<LargeFernItem>();
  }

  { // ID: 423
    registry[423] = std::make_shared<WhiteStainedGlassItem>();
  }

  { // ID: 424
    registry[424] = std::make_shared<OrangeStainedGlassItem>();
  }

  { // ID: 425
    registry[425] = std::make_shared<MagentaStainedGlassItem>();
  }

  { // ID: 426
    registry[426] = std::make_shared<LightBlueStainedGlassItem>();
  }

  { // ID: 427
    registry[427] = std::make_shared<YellowStainedGlassItem>();
  }

  { // ID: 428
    registry[428] = std::make_shared<LimeStainedGlassItem>();
  }

  { // ID: 429
    registry[429] = std::make_shared<PinkStainedGlassItem>();
  }

  { // ID: 430
    registry[430] = std::make_shared<GrayStainedGlassItem>();
  }

  { // ID: 431
    registry[431] = std::make_shared<LightGrayStainedGlassItem>();
  }

  { // ID: 432
    registry[432] = std::make_shared<CyanStainedGlassItem>();
  }

  { // ID: 433
    registry[433] = std::make_shared<PurpleStainedGlassItem>();
  }

  { // ID: 434
    registry[434] = std::make_shared<BlueStainedGlassItem>();
  }

  { // ID: 435
    registry[435] = std::make_shared<BrownStainedGlassItem>();
  }

  { // ID: 436
    registry[436] = std::make_shared<GreenStainedGlassItem>();
  }

  { // ID: 437
    registry[437] = std::make_shared<RedStainedGlassItem>();
  }

  { // ID: 438
    registry[438] = std::make_shared<BlackStainedGlassItem>();
  }

  { // ID: 439
    registry[439] = std::make_shared<WhiteStainedGlassPaneItem>();
  }

  { // ID: 440
    registry[440] = std::make_shared<OrangeStainedGlassPaneItem>();
  }

  { // ID: 441
    registry[441] = std::make_shared<MagentaStainedGlassPaneItem>();
  }

  { // ID: 442
    registry[442] = std::make_shared<LightBlueStainedGlassPaneItem>();
  }

  { // ID: 443
    registry[443] = std::make_shared<YellowStainedGlassPaneItem>();
  }

  { // ID: 444
    registry[444] = std::make_shared<LimeStainedGlassPaneItem>();
  }

  { // ID: 445
    registry[445] = std::make_shared<PinkStainedGlassPaneItem>();
  }

  { // ID: 446
    registry[446] = std::make_shared<GrayStainedGlassPaneItem>();
  }

  { // ID: 447
    registry[447] = std::make_shared<LightGrayStainedGlassPaneItem>();
  }

  { // ID: 448
    registry[448] = std::make_shared<CyanStainedGlassPaneItem>();
  }

  { // ID: 449
    registry[449] = std::make_shared<PurpleStainedGlassPaneItem>();
  }

  { // ID: 450
    registry[450] = std::make_shared<BlueStainedGlassPaneItem>();
  }

  { // ID: 451
    registry[451] = std::make_shared<BrownStainedGlassPaneItem>();
  }

  { // ID: 452
    registry[452] = std::make_shared<GreenStainedGlassPaneItem>();
  }

  { // ID: 453
    registry[453] = std::make_shared<RedStainedGlassPaneItem>();
  }

  { // ID: 454
    registry[454] = std::make_shared<BlackStainedGlassPaneItem>();
  }

  { // ID: 455
    registry[455] = std::make_shared<PrismarineItem>();
  }

  { // ID: 456
    registry[456] = std::make_shared<PrismarineBricksItem>();
  }

  { // ID: 457
    registry[457] = std::make_shared<DarkPrismarineItem>();
  }

  { // ID: 458
    registry[458] = std::make_shared<PrismarineStairsItem>();
  }

  { // ID: 459
    registry[459] = std::make_shared<PrismarineBrickStairsItem>();
  }

  { // ID: 460
    registry[460] = std::make_shared<DarkPrismarineStairsItem>();
  }

  { // ID: 461
    registry[461] = std::make_shared<SeaLanternItem>();
  }

  { // ID: 462
    registry[462] = std::make_shared<RedSandstoneItem>();
  }

  { // ID: 463
    registry[463] = std::make_shared<ChiseledRedSandstoneItem>();
  }

  { // ID: 464
    registry[464] = std::make_shared<CutRedSandstoneItem>();
  }

  { // ID: 465
    registry[465] = std::make_shared<RedSandstoneStairsItem>();
  }

  { // ID: 466
    registry[466] = std::make_shared<RepeatingCommandBlockItem>();
  }

  { // ID: 467
    registry[467] = std::make_shared<ChainCommandBlockItem>();
  }

  { // ID: 468
    registry[468] = std::make_shared<MagmaBlockItem>();
  }

  { // ID: 469
    registry[469] = std::make_shared<NetherWartBlockItem>();
  }

  { // ID: 470
    registry[470] = std::make_shared<WarpedWartBlockItem>();
  }

  { // ID: 471
    registry[471] = std::make_shared<RedNetherBricksItem>();
  }

  { // ID: 472
    registry[472] = std::make_shared<BoneBlockItem>();
  }

  { // ID: 473
    registry[473] = std::make_shared<StructureVoidItem>();
  }

  { // ID: 474
    registry[474] = std::make_shared<ShulkerBoxItem>();
  }

  { // ID: 475
    registry[475] = std::make_shared<WhiteShulkerBoxItem>();
  }

  { // ID: 476
    registry[476] = std::make_shared<OrangeShulkerBoxItem>();
  }

  { // ID: 477
    registry[477] = std::make_shared<MagentaShulkerBoxItem>();
  }

  { // ID: 478
    registry[478] = std::make_shared<LightBlueShulkerBoxItem>();
  }

  { // ID: 479
    registry[479] = std::make_shared<YellowShulkerBoxItem>();
  }

  { // ID: 480
    registry[480] = std::make_shared<LimeShulkerBoxItem>();
  }

  { // ID: 481
    registry[481] = std::make_shared<PinkShulkerBoxItem>();
  }

  { // ID: 482
    registry[482] = std::make_shared<GrayShulkerBoxItem>();
  }

  { // ID: 483
    registry[483] = std::make_shared<LightGrayShulkerBoxItem>();
  }

  { // ID: 484
    registry[484] = std::make_shared<CyanShulkerBoxItem>();
  }

  { // ID: 485
    registry[485] = std::make_shared<PurpleShulkerBoxItem>();
  }

  { // ID: 486
    registry[486] = std::make_shared<BlueShulkerBoxItem>();
  }

  { // ID: 487
    registry[487] = std::make_shared<BrownShulkerBoxItem>();
  }

  { // ID: 488
    registry[488] = std::make_shared<GreenShulkerBoxItem>();
  }

  { // ID: 489
    registry[489] = std::make_shared<RedShulkerBoxItem>();
  }

  { // ID: 490
    registry[490] = std::make_shared<BlackShulkerBoxItem>();
  }

  { // ID: 491
    registry[491] = std::make_shared<WhiteGlazedTerracottaItem>();
  }

  { // ID: 492
    registry[492] = std::make_shared<OrangeGlazedTerracottaItem>();
  }

  { // ID: 493
    registry[493] = std::make_shared<MagentaGlazedTerracottaItem>();
  }

  { // ID: 494
    registry[494] = std::make_shared<LightBlueGlazedTerracottaItem>();
  }

  { // ID: 495
    registry[495] = std::make_shared<YellowGlazedTerracottaItem>();
  }

  { // ID: 496
    registry[496] = std::make_shared<LimeGlazedTerracottaItem>();
  }

  { // ID: 497
    registry[497] = std::make_shared<PinkGlazedTerracottaItem>();
  }

  { // ID: 498
    registry[498] = std::make_shared<GrayGlazedTerracottaItem>();
  }

  { // ID: 499
    registry[499] = std::make_shared<LightGrayGlazedTerracottaItem>();
  }

  { // ID: 500
    registry[500] = std::make_shared<CyanGlazedTerracottaItem>();
  }

  { // ID: 501
    registry[501] = std::make_shared<PurpleGlazedTerracottaItem>();
  }

  { // ID: 502
    registry[502] = std::make_shared<BlueGlazedTerracottaItem>();
  }

  { // ID: 503
    registry[503] = std::make_shared<BrownGlazedTerracottaItem>();
  }

  { // ID: 504
    registry[504] = std::make_shared<GreenGlazedTerracottaItem>();
  }

  { // ID: 505
    registry[505] = std::make_shared<RedGlazedTerracottaItem>();
  }

  { // ID: 506
    registry[506] = std::make_shared<BlackGlazedTerracottaItem>();
  }

  { // ID: 507
    registry[507] = std::make_shared<WhiteConcreteItem>();
  }

  { // ID: 508
    registry[508] = std::make_shared<OrangeConcreteItem>();
  }

  { // ID: 509
    registry[509] = std::make_shared<MagentaConcreteItem>();
  }

  { // ID: 510
    registry[510] = std::make_shared<LightBlueConcreteItem>();
  }

  { // ID: 511
    registry[511] = std::make_shared<YellowConcreteItem>();
  }

  { // ID: 512
    registry[512] = std::make_shared<LimeConcreteItem>();
  }

  { // ID: 513
    registry[513] = std::make_shared<PinkConcreteItem>();
  }

  { // ID: 514
    registry[514] = std::make_shared<GrayConcreteItem>();
  }

  { // ID: 515
    registry[515] = std::make_shared<LightGrayConcreteItem>();
  }

  { // ID: 516
    registry[516] = std::make_shared<CyanConcreteItem>();
  }

  { // ID: 517
    registry[517] = std::make_shared<PurpleConcreteItem>();
  }

  { // ID: 518
    registry[518] = std::make_shared<BlueConcreteItem>();
  }

  { // ID: 519
    registry[519] = std::make_shared<BrownConcreteItem>();
  }

  { // ID: 520
    registry[520] = std::make_shared<GreenConcreteItem>();
  }

  { // ID: 521
    registry[521] = std::make_shared<RedConcreteItem>();
  }

  { // ID: 522
    registry[522] = std::make_shared<BlackConcreteItem>();
  }

  { // ID: 523
    registry[523] = std::make_shared<WhiteConcretePowderItem>();
  }

  { // ID: 524
    registry[524] = std::make_shared<OrangeConcretePowderItem>();
  }

  { // ID: 525
    registry[525] = std::make_shared<MagentaConcretePowderItem>();
  }

  { // ID: 526
    registry[526] = std::make_shared<LightBlueConcretePowderItem>();
  }

  { // ID: 527
    registry[527] = std::make_shared<YellowConcretePowderItem>();
  }

  { // ID: 528
    registry[528] = std::make_shared<LimeConcretePowderItem>();
  }

  { // ID: 529
    registry[529] = std::make_shared<PinkConcretePowderItem>();
  }

  { // ID: 530
    registry[530] = std::make_shared<GrayConcretePowderItem>();
  }

  { // ID: 531
    registry[531] = std::make_shared<LightGrayConcretePowderItem>();
  }

  { // ID: 532
    registry[532] = std::make_shared<CyanConcretePowderItem>();
  }

  { // ID: 533
    registry[533] = std::make_shared<PurpleConcretePowderItem>();
  }

  { // ID: 534
    registry[534] = std::make_shared<BlueConcretePowderItem>();
  }

  { // ID: 535
    registry[535] = std::make_shared<BrownConcretePowderItem>();
  }

  { // ID: 536
    registry[536] = std::make_shared<GreenConcretePowderItem>();
  }

  { // ID: 537
    registry[537] = std::make_shared<RedConcretePowderItem>();
  }

  { // ID: 538
    registry[538] = std::make_shared<BlackConcretePowderItem>();
  }

  { // ID: 539
    registry[539] = std::make_shared<TurtleEggItem>();
  }

  { // ID: 540
    registry[540] = std::make_shared<DeadTubeCoralBlockItem>();
  }

  { // ID: 541
    registry[541] = std::make_shared<DeadBrainCoralBlockItem>();
  }

  { // ID: 542
    registry[542] = std::make_shared<DeadBubbleCoralBlockItem>();
  }

  { // ID: 543
    registry[543] = std::make_shared<DeadFireCoralBlockItem>();
  }

  { // ID: 544
    registry[544] = std::make_shared<DeadHornCoralBlockItem>();
  }

  { // ID: 545
    registry[545] = std::make_shared<TubeCoralBlockItem>();
  }

  { // ID: 546
    registry[546] = std::make_shared<BrainCoralBlockItem>();
  }

  { // ID: 547
    registry[547] = std::make_shared<BubbleCoralBlockItem>();
  }

  { // ID: 548
    registry[548] = std::make_shared<FireCoralBlockItem>();
  }

  { // ID: 549
    registry[549] = std::make_shared<HornCoralBlockItem>();
  }

  { // ID: 550
    registry[550] = std::make_shared<TubeCoralItem>();
  }

  { // ID: 551
    registry[551] = std::make_shared<BrainCoralItem>();
  }

  { // ID: 552
    registry[552] = std::make_shared<BubbleCoralItem>();
  }

  { // ID: 553
    registry[553] = std::make_shared<FireCoralItem>();
  }

  { // ID: 554
    registry[554] = std::make_shared<HornCoralItem>();
  }

  { // ID: 555
    registry[555] = std::make_shared<DeadBrainCoralItem>();
  }

  { // ID: 556
    registry[556] = std::make_shared<DeadBubbleCoralItem>();
  }

  { // ID: 557
    registry[557] = std::make_shared<DeadFireCoralItem>();
  }

  { // ID: 558
    registry[558] = std::make_shared<DeadHornCoralItem>();
  }

  { // ID: 559
    registry[559] = std::make_shared<DeadTubeCoralItem>();
  }

  { // ID: 560
    registry[560] = std::make_shared<TubeCoralFanItem>();
  }

  { // ID: 561
    registry[561] = std::make_shared<BrainCoralFanItem>();
  }

  { // ID: 562
    registry[562] = std::make_shared<BubbleCoralFanItem>();
  }

  { // ID: 563
    registry[563] = std::make_shared<FireCoralFanItem>();
  }

  { // ID: 564
    registry[564] = std::make_shared<HornCoralFanItem>();
  }

  { // ID: 565
    registry[565] = std::make_shared<DeadTubeCoralFanItem>();
  }

  { // ID: 566
    registry[566] = std::make_shared<DeadBrainCoralFanItem>();
  }

  { // ID: 567
    registry[567] = std::make_shared<DeadBubbleCoralFanItem>();
  }

  { // ID: 568
    registry[568] = std::make_shared<DeadFireCoralFanItem>();
  }

  { // ID: 569
    registry[569] = std::make_shared<DeadHornCoralFanItem>();
  }

  { // ID: 570
    registry[570] = std::make_shared<BlueIceItem>();
  }

  { // ID: 571
    registry[571] = std::make_shared<ConduitItem>();
  }

  { // ID: 572
    registry[572] = std::make_shared<PolishedGraniteStairsItem>();
  }

  { // ID: 573
    registry[573] = std::make_shared<SmoothRedSandstoneStairsItem>();
  }

  { // ID: 574
    registry[574] = std::make_shared<MossyStoneBrickStairsItem>();
  }

  { // ID: 575
    registry[575] = std::make_shared<PolishedDioriteStairsItem>();
  }

  { // ID: 576
    registry[576] = std::make_shared<MossyCobblestoneStairsItem>();
  }

  { // ID: 577
    registry[577] = std::make_shared<EndStoneBrickStairsItem>();
  }

  { // ID: 578
    registry[578] = std::make_shared<StoneStairsItem>();
  }

  { // ID: 579
    registry[579] = std::make_shared<SmoothSandstoneStairsItem>();
  }

  { // ID: 580
    registry[580] = std::make_shared<SmoothQuartzStairsItem>();
  }

  { // ID: 581
    registry[581] = std::make_shared<GraniteStairsItem>();
  }

  { // ID: 582
    registry[582] = std::make_shared<AndesiteStairsItem>();
  }

  { // ID: 583
    registry[583] = std::make_shared<RedNetherBrickStairsItem>();
  }

  { // ID: 584
    registry[584] = std::make_shared<PolishedAndesiteStairsItem>();
  }

  { // ID: 585
    registry[585] = std::make_shared<DioriteStairsItem>();
  }

  { // ID: 586
    registry[586] = std::make_shared<CobbledDeepslateStairsItem>();
  }

  { // ID: 587
    registry[587] = std::make_shared<PolishedDeepslateStairsItem>();
  }

  { // ID: 588
    registry[588] = std::make_shared<DeepslateBrickStairsItem>();
  }

  { // ID: 589
    registry[589] = std::make_shared<DeepslateTileStairsItem>();
  }

  { // ID: 590
    registry[590] = std::make_shared<PolishedGraniteSlabItem>();
  }

  { // ID: 591
    registry[591] = std::make_shared<SmoothRedSandstoneSlabItem>();
  }

  { // ID: 592
    registry[592] = std::make_shared<MossyStoneBrickSlabItem>();
  }

  { // ID: 593
    registry[593] = std::make_shared<PolishedDioriteSlabItem>();
  }

  { // ID: 594
    registry[594] = std::make_shared<MossyCobblestoneSlabItem>();
  }

  { // ID: 595
    registry[595] = std::make_shared<EndStoneBrickSlabItem>();
  }

  { // ID: 596
    registry[596] = std::make_shared<SmoothSandstoneSlabItem>();
  }

  { // ID: 597
    registry[597] = std::make_shared<SmoothQuartzSlabItem>();
  }

  { // ID: 598
    registry[598] = std::make_shared<GraniteSlabItem>();
  }

  { // ID: 599
    registry[599] = std::make_shared<AndesiteSlabItem>();
  }

  { // ID: 600
    registry[600] = std::make_shared<RedNetherBrickSlabItem>();
  }

  { // ID: 601
    registry[601] = std::make_shared<PolishedAndesiteSlabItem>();
  }

  { // ID: 602
    registry[602] = std::make_shared<DioriteSlabItem>();
  }

  { // ID: 603
    registry[603] = std::make_shared<CobbledDeepslateSlabItem>();
  }

  { // ID: 604
    registry[604] = std::make_shared<PolishedDeepslateSlabItem>();
  }

  { // ID: 605
    registry[605] = std::make_shared<DeepslateBrickSlabItem>();
  }

  { // ID: 606
    registry[606] = std::make_shared<DeepslateTileSlabItem>();
  }

  { // ID: 607
    registry[607] = std::make_shared<ScaffoldingItem>();
  }

  { // ID: 608
    registry[608] = std::make_shared<RedstoneItem>();
  }

  { // ID: 609
    registry[609] = std::make_shared<RedstoneTorchItem>();
  }

  { // ID: 610
    registry[610] = std::make_shared<RedstoneBlockItem>();
  }

  { // ID: 611
    registry[611] = std::make_shared<RepeaterItem>();
  }

  { // ID: 612
    registry[612] = std::make_shared<ComparatorItem>();
  }

  { // ID: 613
    registry[613] = std::make_shared<PistonItem>();
  }

  { // ID: 614
    registry[614] = std::make_shared<StickyPistonItem>();
  }

  { // ID: 615
    registry[615] = std::make_shared<SlimeBlockItem>();
  }

  { // ID: 616
    registry[616] = std::make_shared<HoneyBlockItem>();
  }

  { // ID: 617
    registry[617] = std::make_shared<ObserverItem>();
  }

  { // ID: 618
    registry[618] = std::make_shared<HopperItem>();
  }

  { // ID: 619
    registry[619] = std::make_shared<DispenserItem>();
  }

  { // ID: 620
    registry[620] = std::make_shared<DropperItem>();
  }

  { // ID: 621
    registry[621] = std::make_shared<LecternItem>();
  }

  { // ID: 622
    registry[622] = std::make_shared<TargetItem>();
  }

  { // ID: 623
    registry[623] = std::make_shared<LeverItem>();
  }

  { // ID: 624
    registry[624] = std::make_shared<LightningRodItem>();
  }

  { // ID: 625
    registry[625] = std::make_shared<DaylightDetectorItem>();
  }

  { // ID: 626
    registry[626] = std::make_shared<SculkSensorItem>();
  }

  { // ID: 627
    registry[627] = std::make_shared<TripwireHookItem>();
  }

  { // ID: 628
    registry[628] = std::make_shared<TrappedChestItem>();
  }

  { // ID: 629
    registry[629] = std::make_shared<TntItem>();
  }

  { // ID: 630
    registry[630] = std::make_shared<RedstoneLampItem>();
  }

  { // ID: 631
    registry[631] = std::make_shared<NoteBlockItem>();
  }

  { // ID: 632
    registry[632] = std::make_shared<StoneButtonItem>();
  }

  { // ID: 633
    registry[633] = std::make_shared<PolishedBlackstoneButtonItem>();
  }

  { // ID: 634
    registry[634] = std::make_shared<OakButtonItem>();
  }

  { // ID: 635
    registry[635] = std::make_shared<SpruceButtonItem>();
  }

  { // ID: 636
    registry[636] = std::make_shared<BirchButtonItem>();
  }

  { // ID: 637
    registry[637] = std::make_shared<JungleButtonItem>();
  }

  { // ID: 638
    registry[638] = std::make_shared<AcaciaButtonItem>();
  }

  { // ID: 639
    registry[639] = std::make_shared<DarkOakButtonItem>();
  }

  { // ID: 640
    registry[640] = std::make_shared<MangroveButtonItem>();
  }

  { // ID: 641
    registry[641] = std::make_shared<CrimsonButtonItem>();
  }

  { // ID: 642
    registry[642] = std::make_shared<WarpedButtonItem>();
  }

  { // ID: 643
    registry[643] = std::make_shared<StonePressurePlateItem>();
  }

  { // ID: 644
    registry[644] = std::make_shared<PolishedBlackstonePressurePlateItem>();
  }

  { // ID: 645
    registry[645] = std::make_shared<LightWeightedPressurePlateItem>();
  }

  { // ID: 646
    registry[646] = std::make_shared<HeavyWeightedPressurePlateItem>();
  }

  { // ID: 647
    registry[647] = std::make_shared<OakPressurePlateItem>();
  }

  { // ID: 648
    registry[648] = std::make_shared<SprucePressurePlateItem>();
  }

  { // ID: 649
    registry[649] = std::make_shared<BirchPressurePlateItem>();
  }

  { // ID: 650
    registry[650] = std::make_shared<JunglePressurePlateItem>();
  }

  { // ID: 651
    registry[651] = std::make_shared<AcaciaPressurePlateItem>();
  }

  { // ID: 652
    registry[652] = std::make_shared<DarkOakPressurePlateItem>();
  }

  { // ID: 653
    registry[653] = std::make_shared<MangrovePressurePlateItem>();
  }

  { // ID: 654
    registry[654] = std::make_shared<CrimsonPressurePlateItem>();
  }

  { // ID: 655
    registry[655] = std::make_shared<WarpedPressurePlateItem>();
  }

  { // ID: 656
    registry[656] = std::make_shared<IronDoorItem>();
  }

  { // ID: 657
    registry[657] = std::make_shared<OakDoorItem>();
  }

  { // ID: 658
    registry[658] = std::make_shared<SpruceDoorItem>();
  }

  { // ID: 659
    registry[659] = std::make_shared<BirchDoorItem>();
  }

  { // ID: 660
    registry[660] = std::make_shared<JungleDoorItem>();
  }

  { // ID: 661
    registry[661] = std::make_shared<AcaciaDoorItem>();
  }

  { // ID: 662
    registry[662] = std::make_shared<DarkOakDoorItem>();
  }

  { // ID: 663
    registry[663] = std::make_shared<MangroveDoorItem>();
  }

  { // ID: 664
    registry[664] = std::make_shared<CrimsonDoorItem>();
  }

  { // ID: 665
    registry[665] = std::make_shared<WarpedDoorItem>();
  }

  { // ID: 666
    registry[666] = std::make_shared<IronTrapdoorItem>();
  }

  { // ID: 667
    registry[667] = std::make_shared<OakTrapdoorItem>();
  }

  { // ID: 668
    registry[668] = std::make_shared<SpruceTrapdoorItem>();
  }

  { // ID: 669
    registry[669] = std::make_shared<BirchTrapdoorItem>();
  }

  { // ID: 670
    registry[670] = std::make_shared<JungleTrapdoorItem>();
  }

  { // ID: 671
    registry[671] = std::make_shared<AcaciaTrapdoorItem>();
  }

  { // ID: 672
    registry[672] = std::make_shared<DarkOakTrapdoorItem>();
  }

  { // ID: 673
    registry[673] = std::make_shared<MangroveTrapdoorItem>();
  }

  { // ID: 674
    registry[674] = std::make_shared<CrimsonTrapdoorItem>();
  }

  { // ID: 675
    registry[675] = std::make_shared<WarpedTrapdoorItem>();
  }

  { // ID: 676
    registry[676] = std::make_shared<OakFenceGateItem>();
  }

  { // ID: 677
    registry[677] = std::make_shared<SpruceFenceGateItem>();
  }

  { // ID: 678
    registry[678] = std::make_shared<BirchFenceGateItem>();
  }

  { // ID: 679
    registry[679] = std::make_shared<JungleFenceGateItem>();
  }

  { // ID: 680
    registry[680] = std::make_shared<AcaciaFenceGateItem>();
  }

  { // ID: 681
    registry[681] = std::make_shared<DarkOakFenceGateItem>();
  }

  { // ID: 682
    registry[682] = std::make_shared<MangroveFenceGateItem>();
  }

  { // ID: 683
    registry[683] = std::make_shared<CrimsonFenceGateItem>();
  }

  { // ID: 684
    registry[684] = std::make_shared<WarpedFenceGateItem>();
  }

  { // ID: 685
    registry[685] = std::make_shared<PoweredRailItem>();
  }

  { // ID: 686
    registry[686] = std::make_shared<DetectorRailItem>();
  }

  { // ID: 687
    registry[687] = std::make_shared<RailItem>();
  }

  { // ID: 688
    registry[688] = std::make_shared<ActivatorRailItem>();
  }

  { // ID: 689
    registry[689] = std::make_shared<SaddleItem>();
  }

  { // ID: 690
    registry[690] = std::make_shared<MinecartItem>();
  }

  { // ID: 691
    registry[691] = std::make_shared<ChestMinecartItem>();
  }

  { // ID: 692
    registry[692] = std::make_shared<FurnaceMinecartItem>();
  }

  { // ID: 693
    registry[693] = std::make_shared<TntMinecartItem>();
  }

  { // ID: 694
    registry[694] = std::make_shared<HopperMinecartItem>();
  }

  { // ID: 695
    registry[695] = std::make_shared<CarrotOnAStickItem>();
  }

  { // ID: 696
    registry[696] = std::make_shared<WarpedFungusOnAStickItem>();
  }

  { // ID: 697
    registry[697] = std::make_shared<ElytraItem>();
  }

  { // ID: 698
    registry[698] = std::make_shared<OakBoatItem>();
  }

  { // ID: 699
    registry[699] = std::make_shared<OakChestBoatItem>();
  }

  { // ID: 700
    registry[700] = std::make_shared<SpruceBoatItem>();
  }

  { // ID: 701
    registry[701] = std::make_shared<SpruceChestBoatItem>();
  }

  { // ID: 702
    registry[702] = std::make_shared<BirchBoatItem>();
  }

  { // ID: 703
    registry[703] = std::make_shared<BirchChestBoatItem>();
  }

  { // ID: 704
    registry[704] = std::make_shared<JungleBoatItem>();
  }

  { // ID: 705
    registry[705] = std::make_shared<JungleChestBoatItem>();
  }

  { // ID: 706
    registry[706] = std::make_shared<AcaciaBoatItem>();
  }

  { // ID: 707
    registry[707] = std::make_shared<AcaciaChestBoatItem>();
  }

  { // ID: 708
    registry[708] = std::make_shared<DarkOakBoatItem>();
  }

  { // ID: 709
    registry[709] = std::make_shared<DarkOakChestBoatItem>();
  }

  { // ID: 710
    registry[710] = std::make_shared<MangroveBoatItem>();
  }

  { // ID: 711
    registry[711] = std::make_shared<MangroveChestBoatItem>();
  }

  { // ID: 712
    registry[712] = std::make_shared<StructureBlockItem>();
  }

  { // ID: 713
    registry[713] = std::make_shared<JigsawItem>();
  }

  { // ID: 714
    registry[714] = std::make_shared<TurtleHelmetItem>();
  }

  { // ID: 715
    registry[715] = std::make_shared<ScuteItem>();
  }

  { // ID: 716
    registry[716] = std::make_shared<FlintAndSteelItem>();
  }

  { // ID: 717
    registry[717] = std::make_shared<AppleItem>();
  }

  { // ID: 718
    registry[718] = std::make_shared<BowItem>();
  }

  { // ID: 719
    registry[719] = std::make_shared<ArrowItem>();
  }

  { // ID: 720
    registry[720] = std::make_shared<CoalItem>();
  }

  { // ID: 721
    registry[721] = std::make_shared<CharcoalItem>();
  }

  { // ID: 722
    registry[722] = std::make_shared<DiamondItem>();
  }

  { // ID: 723
    registry[723] = std::make_shared<EmeraldItem>();
  }

  { // ID: 724
    registry[724] = std::make_shared<LapisLazuliItem>();
  }

  { // ID: 725
    registry[725] = std::make_shared<QuartzItem>();
  }

  { // ID: 726
    registry[726] = std::make_shared<AmethystShardItem>();
  }

  { // ID: 727
    registry[727] = std::make_shared<RawIronItem>();
  }

  { // ID: 728
    registry[728] = std::make_shared<IronIngotItem>();
  }

  { // ID: 729
    registry[729] = std::make_shared<RawCopperItem>();
  }

  { // ID: 730
    registry[730] = std::make_shared<CopperIngotItem>();
  }

  { // ID: 731
    registry[731] = std::make_shared<RawGoldItem>();
  }

  { // ID: 732
    registry[732] = std::make_shared<GoldIngotItem>();
  }

  { // ID: 733
    registry[733] = std::make_shared<NetheriteIngotItem>();
  }

  { // ID: 734
    registry[734] = std::make_shared<NetheriteScrapItem>();
  }

  { // ID: 735
    registry[735] = std::make_shared<WoodenSwordItem>();
  }

  { // ID: 736
    registry[736] = std::make_shared<WoodenShovelItem>();
  }

  { // ID: 737
    registry[737] = std::make_shared<WoodenPickaxeItem>();
  }

  { // ID: 738
    registry[738] = std::make_shared<WoodenAxeItem>();
  }

  { // ID: 739
    registry[739] = std::make_shared<WoodenHoeItem>();
  }

  { // ID: 740
    registry[740] = std::make_shared<StoneSwordItem>();
  }

  { // ID: 741
    registry[741] = std::make_shared<StoneShovelItem>();
  }

  { // ID: 742
    registry[742] = std::make_shared<StonePickaxeItem>();
  }

  { // ID: 743
    registry[743] = std::make_shared<StoneAxeItem>();
  }

  { // ID: 744
    registry[744] = std::make_shared<StoneHoeItem>();
  }

  { // ID: 745
    registry[745] = std::make_shared<GoldenSwordItem>();
  }

  { // ID: 746
    registry[746] = std::make_shared<GoldenShovelItem>();
  }

  { // ID: 747
    registry[747] = std::make_shared<GoldenPickaxeItem>();
  }

  { // ID: 748
    registry[748] = std::make_shared<GoldenAxeItem>();
  }

  { // ID: 749
    registry[749] = std::make_shared<GoldenHoeItem>();
  }

  { // ID: 750
    registry[750] = std::make_shared<IronSwordItem>();
  }

  { // ID: 751
    registry[751] = std::make_shared<IronShovelItem>();
  }

  { // ID: 752
    registry[752] = std::make_shared<IronPickaxeItem>();
  }

  { // ID: 753
    registry[753] = std::make_shared<IronAxeItem>();
  }

  { // ID: 754
    registry[754] = std::make_shared<IronHoeItem>();
  }

  { // ID: 755
    registry[755] = std::make_shared<DiamondSwordItem>();
  }

  { // ID: 756
    registry[756] = std::make_shared<DiamondShovelItem>();
  }

  { // ID: 757
    registry[757] = std::make_shared<DiamondPickaxeItem>();
  }

  { // ID: 758
    registry[758] = std::make_shared<DiamondAxeItem>();
  }

  { // ID: 759
    registry[759] = std::make_shared<DiamondHoeItem>();
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

  { // ID: 765
    registry[765] = std::make_shared<StickItem>();
  }

  { // ID: 766
    registry[766] = std::make_shared<BowlItem>();
  }

  { // ID: 767
    registry[767] = std::make_shared<MushroomStewItem>();
  }

  { // ID: 768
    registry[768] = std::make_shared<StringItem>();
  }

  { // ID: 769
    registry[769] = std::make_shared<FeatherItem>();
  }

  { // ID: 770
    registry[770] = std::make_shared<GunpowderItem>();
  }

  { // ID: 771
    registry[771] = std::make_shared<WheatSeedsItem>();
  }

  { // ID: 772
    registry[772] = std::make_shared<WheatItem>();
  }

  { // ID: 773
    registry[773] = std::make_shared<BreadItem>();
  }

  { // ID: 774
    registry[774] = std::make_shared<LeatherHelmetItem>();
  }

  { // ID: 775
    registry[775] = std::make_shared<LeatherChestplateItem>();
  }

  { // ID: 776
    registry[776] = std::make_shared<LeatherLeggingsItem>();
  }

  { // ID: 777
    registry[777] = std::make_shared<LeatherBootsItem>();
  }

  { // ID: 778
    registry[778] = std::make_shared<ChainmailHelmetItem>();
  }

  { // ID: 779
    registry[779] = std::make_shared<ChainmailChestplateItem>();
  }

  { // ID: 780
    registry[780] = std::make_shared<ChainmailLeggingsItem>();
  }

  { // ID: 781
    registry[781] = std::make_shared<ChainmailBootsItem>();
  }

  { // ID: 782
    registry[782] = std::make_shared<IronHelmetItem>();
  }

  { // ID: 783
    registry[783] = std::make_shared<IronChestplateItem>();
  }

  { // ID: 784
    registry[784] = std::make_shared<IronLeggingsItem>();
  }

  { // ID: 785
    registry[785] = std::make_shared<IronBootsItem>();
  }

  { // ID: 786
    registry[786] = std::make_shared<DiamondHelmetItem>();
  }

  { // ID: 787
    registry[787] = std::make_shared<DiamondChestplateItem>();
  }

  { // ID: 788
    registry[788] = std::make_shared<DiamondLeggingsItem>();
  }

  { // ID: 789
    registry[789] = std::make_shared<DiamondBootsItem>();
  }

  { // ID: 790
    registry[790] = std::make_shared<GoldenHelmetItem>();
  }

  { // ID: 791
    registry[791] = std::make_shared<GoldenChestplateItem>();
  }

  { // ID: 792
    registry[792] = std::make_shared<GoldenLeggingsItem>();
  }

  { // ID: 793
    registry[793] = std::make_shared<GoldenBootsItem>();
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

  { // ID: 798
    registry[798] = std::make_shared<FlintItem>();
  }

  { // ID: 799
    registry[799] = std::make_shared<PorkchopItem>();
  }

  { // ID: 800
    registry[800] = std::make_shared<CookedPorkchopItem>();
  }

  { // ID: 801
    registry[801] = std::make_shared<PaintingItem>();
  }

  { // ID: 802
    registry[802] = std::make_shared<GoldenAppleItem>();
  }

  { // ID: 803
    registry[803] = std::make_shared<EnchantedGoldenAppleItem>();
  }

  { // ID: 804
    registry[804] = std::make_shared<OakSignItem>();
  }

  { // ID: 805
    registry[805] = std::make_shared<SpruceSignItem>();
  }

  { // ID: 806
    registry[806] = std::make_shared<BirchSignItem>();
  }

  { // ID: 807
    registry[807] = std::make_shared<JungleSignItem>();
  }

  { // ID: 808
    registry[808] = std::make_shared<AcaciaSignItem>();
  }

  { // ID: 809
    registry[809] = std::make_shared<DarkOakSignItem>();
  }

  { // ID: 810
    registry[810] = std::make_shared<MangroveSignItem>();
  }

  { // ID: 811
    registry[811] = std::make_shared<CrimsonSignItem>();
  }

  { // ID: 812
    registry[812] = std::make_shared<WarpedSignItem>();
  }

  { // ID: 813
    registry[813] = std::make_shared<BucketItem>();
  }

  { // ID: 814
    registry[814] = std::make_shared<WaterBucketItem>();
  }

  { // ID: 815
    registry[815] = std::make_shared<LavaBucketItem>();
  }

  { // ID: 816
    registry[816] = std::make_shared<PowderSnowBucketItem>();
  }

  { // ID: 817
    registry[817] = std::make_shared<SnowballItem>();
  }

  { // ID: 818
    registry[818] = std::make_shared<LeatherItem>();
  }

  { // ID: 819
    registry[819] = std::make_shared<MilkBucketItem>();
  }

  { // ID: 820
    registry[820] = std::make_shared<PufferfishBucketItem>();
  }

  { // ID: 821
    registry[821] = std::make_shared<SalmonBucketItem>();
  }

  { // ID: 822
    registry[822] = std::make_shared<CodBucketItem>();
  }

  { // ID: 823
    registry[823] = std::make_shared<TropicalFishBucketItem>();
  }

  { // ID: 824
    registry[824] = std::make_shared<AxolotlBucketItem>();
  }

  { // ID: 825
    registry[825] = std::make_shared<TadpoleBucketItem>();
  }

  { // ID: 826
    registry[826] = std::make_shared<BrickItem>();
  }

  { // ID: 827
    registry[827] = std::make_shared<ClayBallItem>();
  }

  { // ID: 828
    registry[828] = std::make_shared<DriedKelpBlockItem>();
  }

  { // ID: 829
    registry[829] = std::make_shared<PaperItem>();
  }

  { // ID: 830
    registry[830] = std::make_shared<BookItem>();
  }

  { // ID: 831
    registry[831] = std::make_shared<SlimeBallItem>();
  }

  { // ID: 832
    registry[832] = std::make_shared<EggItem>();
  }

  { // ID: 833
    registry[833] = std::make_shared<CompassItem>();
  }

  { // ID: 834
    registry[834] = std::make_shared<RecoveryCompassItem>();
  }

  { // ID: 835
    registry[835] = std::make_shared<BundleItem>();
  }

  { // ID: 836
    registry[836] = std::make_shared<FishingRodItem>();
  }

  { // ID: 837
    registry[837] = std::make_shared<ClockItem>();
  }

  { // ID: 838
    registry[838] = std::make_shared<SpyglassItem>();
  }

  { // ID: 839
    registry[839] = std::make_shared<GlowstoneDustItem>();
  }

  { // ID: 840
    registry[840] = std::make_shared<CodItem>();
  }

  { // ID: 841
    registry[841] = std::make_shared<SalmonItem>();
  }

  { // ID: 842
    registry[842] = std::make_shared<TropicalFishItem>();
  }

  { // ID: 843
    registry[843] = std::make_shared<PufferfishItem>();
  }

  { // ID: 844
    registry[844] = std::make_shared<CookedCodItem>();
  }

  { // ID: 845
    registry[845] = std::make_shared<CookedSalmonItem>();
  }

  { // ID: 846
    registry[846] = std::make_shared<InkSacItem>();
  }

  { // ID: 847
    registry[847] = std::make_shared<GlowInkSacItem>();
  }

  { // ID: 848
    registry[848] = std::make_shared<CocoaBeansItem>();
  }

  { // ID: 849
    registry[849] = std::make_shared<WhiteDyeItem>();
  }

  { // ID: 850
    registry[850] = std::make_shared<OrangeDyeItem>();
  }

  { // ID: 851
    registry[851] = std::make_shared<MagentaDyeItem>();
  }

  { // ID: 852
    registry[852] = std::make_shared<LightBlueDyeItem>();
  }

  { // ID: 853
    registry[853] = std::make_shared<YellowDyeItem>();
  }

  { // ID: 854
    registry[854] = std::make_shared<LimeDyeItem>();
  }

  { // ID: 855
    registry[855] = std::make_shared<PinkDyeItem>();
  }

  { // ID: 856
    registry[856] = std::make_shared<GrayDyeItem>();
  }

  { // ID: 857
    registry[857] = std::make_shared<LightGrayDyeItem>();
  }

  { // ID: 858
    registry[858] = std::make_shared<CyanDyeItem>();
  }

  { // ID: 859
    registry[859] = std::make_shared<PurpleDyeItem>();
  }

  { // ID: 860
    registry[860] = std::make_shared<BlueDyeItem>();
  }

  { // ID: 861
    registry[861] = std::make_shared<BrownDyeItem>();
  }

  { // ID: 862
    registry[862] = std::make_shared<GreenDyeItem>();
  }

  { // ID: 863
    registry[863] = std::make_shared<RedDyeItem>();
  }

  { // ID: 864
    registry[864] = std::make_shared<BlackDyeItem>();
  }

  { // ID: 865
    registry[865] = std::make_shared<BoneMealItem>();
  }

  { // ID: 866
    registry[866] = std::make_shared<BoneItem>();
  }

  { // ID: 867
    registry[867] = std::make_shared<SugarItem>();
  }

  { // ID: 868
    registry[868] = std::make_shared<CakeItem>();
  }

  { // ID: 869
    registry[869] = std::make_shared<WhiteBedItem>();
  }

  { // ID: 870
    registry[870] = std::make_shared<OrangeBedItem>();
  }

  { // ID: 871
    registry[871] = std::make_shared<MagentaBedItem>();
  }

  { // ID: 872
    registry[872] = std::make_shared<LightBlueBedItem>();
  }

  { // ID: 873
    registry[873] = std::make_shared<YellowBedItem>();
  }

  { // ID: 874
    registry[874] = std::make_shared<LimeBedItem>();
  }

  { // ID: 875
    registry[875] = std::make_shared<PinkBedItem>();
  }

  { // ID: 876
    registry[876] = std::make_shared<GrayBedItem>();
  }

  { // ID: 877
    registry[877] = std::make_shared<LightGrayBedItem>();
  }

  { // ID: 878
    registry[878] = std::make_shared<CyanBedItem>();
  }

  { // ID: 879
    registry[879] = std::make_shared<PurpleBedItem>();
  }

  { // ID: 880
    registry[880] = std::make_shared<BlueBedItem>();
  }

  { // ID: 881
    registry[881] = std::make_shared<BrownBedItem>();
  }

  { // ID: 882
    registry[882] = std::make_shared<GreenBedItem>();
  }

  { // ID: 883
    registry[883] = std::make_shared<RedBedItem>();
  }

  { // ID: 884
    registry[884] = std::make_shared<BlackBedItem>();
  }

  { // ID: 885
    registry[885] = std::make_shared<CookieItem>();
  }

  { // ID: 886
    registry[886] = std::make_shared<FilledMapItem>();
  }

  { // ID: 887
    registry[887] = std::make_shared<ShearsItem>();
  }

  { // ID: 888
    registry[888] = std::make_shared<MelonSliceItem>();
  }

  { // ID: 889
    registry[889] = std::make_shared<DriedKelpItem>();
  }

  { // ID: 890
    registry[890] = std::make_shared<PumpkinSeedsItem>();
  }

  { // ID: 891
    registry[891] = std::make_shared<MelonSeedsItem>();
  }

  { // ID: 892
    registry[892] = std::make_shared<BeefItem>();
  }

  { // ID: 893
    registry[893] = std::make_shared<CookedBeefItem>();
  }

  { // ID: 894
    registry[894] = std::make_shared<ChickenItem>();
  }

  { // ID: 895
    registry[895] = std::make_shared<CookedChickenItem>();
  }

  { // ID: 896
    registry[896] = std::make_shared<RottenFleshItem>();
  }

  { // ID: 897
    registry[897] = std::make_shared<EnderPearlItem>();
  }

  { // ID: 898
    registry[898] = std::make_shared<BlazeRodItem>();
  }

  { // ID: 899
    registry[899] = std::make_shared<GhastTearItem>();
  }

  { // ID: 900
    registry[900] = std::make_shared<GoldNuggetItem>();
  }

  { // ID: 901
    registry[901] = std::make_shared<NetherWartItem>();
  }

  { // ID: 902
    registry[902] = std::make_shared<PotionItem>();
  }

  { // ID: 903
    registry[903] = std::make_shared<GlassBottleItem>();
  }

  { // ID: 904
    registry[904] = std::make_shared<SpiderEyeItem>();
  }

  { // ID: 905
    registry[905] = std::make_shared<FermentedSpiderEyeItem>();
  }

  { // ID: 906
    registry[906] = std::make_shared<BlazePowderItem>();
  }

  { // ID: 907
    registry[907] = std::make_shared<MagmaCreamItem>();
  }

  { // ID: 908
    registry[908] = std::make_shared<BrewingStandItem>();
  }

  { // ID: 909
    registry[909] = std::make_shared<CauldronItem>();
  }

  { // ID: 910
    registry[910] = std::make_shared<EnderEyeItem>();
  }

  { // ID: 911
    registry[911] = std::make_shared<GlisteringMelonSliceItem>();
  }

  { // ID: 912
    registry[912] = std::make_shared<AllaySpawnEggItem>();
  }

  { // ID: 913
    registry[913] = std::make_shared<AxolotlSpawnEggItem>();
  }

  { // ID: 914
    registry[914] = std::make_shared<BatSpawnEggItem>();
  }

  { // ID: 915
    registry[915] = std::make_shared<BeeSpawnEggItem>();
  }

  { // ID: 916
    registry[916] = std::make_shared<BlazeSpawnEggItem>();
  }

  { // ID: 917
    registry[917] = std::make_shared<CatSpawnEggItem>();
  }

  { // ID: 918
    registry[918] = std::make_shared<CaveSpiderSpawnEggItem>();
  }

  { // ID: 919
    registry[919] = std::make_shared<ChickenSpawnEggItem>();
  }

  { // ID: 920
    registry[920] = std::make_shared<CodSpawnEggItem>();
  }

  { // ID: 921
    registry[921] = std::make_shared<CowSpawnEggItem>();
  }

  { // ID: 922
    registry[922] = std::make_shared<CreeperSpawnEggItem>();
  }

  { // ID: 923
    registry[923] = std::make_shared<DolphinSpawnEggItem>();
  }

  { // ID: 924
    registry[924] = std::make_shared<DonkeySpawnEggItem>();
  }

  { // ID: 925
    registry[925] = std::make_shared<DrownedSpawnEggItem>();
  }

  { // ID: 926
    registry[926] = std::make_shared<ElderGuardianSpawnEggItem>();
  }

  { // ID: 927
    registry[927] = std::make_shared<EndermanSpawnEggItem>();
  }

  { // ID: 928
    registry[928] = std::make_shared<EndermiteSpawnEggItem>();
  }

  { // ID: 929
    registry[929] = std::make_shared<EvokerSpawnEggItem>();
  }

  { // ID: 930
    registry[930] = std::make_shared<FoxSpawnEggItem>();
  }

  { // ID: 931
    registry[931] = std::make_shared<FrogSpawnEggItem>();
  }

  { // ID: 932
    registry[932] = std::make_shared<GhastSpawnEggItem>();
  }

  { // ID: 933
    registry[933] = std::make_shared<GlowSquidSpawnEggItem>();
  }

  { // ID: 934
    registry[934] = std::make_shared<GoatSpawnEggItem>();
  }

  { // ID: 935
    registry[935] = std::make_shared<GuardianSpawnEggItem>();
  }

  { // ID: 936
    registry[936] = std::make_shared<HoglinSpawnEggItem>();
  }

  { // ID: 937
    registry[937] = std::make_shared<HorseSpawnEggItem>();
  }

  { // ID: 938
    registry[938] = std::make_shared<HuskSpawnEggItem>();
  }

  { // ID: 939
    registry[939] = std::make_shared<LlamaSpawnEggItem>();
  }

  { // ID: 940
    registry[940] = std::make_shared<MagmaCubeSpawnEggItem>();
  }

  { // ID: 941
    registry[941] = std::make_shared<MooshroomSpawnEggItem>();
  }

  { // ID: 942
    registry[942] = std::make_shared<MuleSpawnEggItem>();
  }

  { // ID: 943
    registry[943] = std::make_shared<OcelotSpawnEggItem>();
  }

  { // ID: 944
    registry[944] = std::make_shared<PandaSpawnEggItem>();
  }

  { // ID: 945
    registry[945] = std::make_shared<ParrotSpawnEggItem>();
  }

  { // ID: 946
    registry[946] = std::make_shared<PhantomSpawnEggItem>();
  }

  { // ID: 947
    registry[947] = std::make_shared<PigSpawnEggItem>();
  }

  { // ID: 948
    registry[948] = std::make_shared<PiglinSpawnEggItem>();
  }

  { // ID: 949
    registry[949] = std::make_shared<PiglinBruteSpawnEggItem>();
  }

  { // ID: 950
    registry[950] = std::make_shared<PillagerSpawnEggItem>();
  }

  { // ID: 951
    registry[951] = std::make_shared<PolarBearSpawnEggItem>();
  }

  { // ID: 952
    registry[952] = std::make_shared<PufferfishSpawnEggItem>();
  }

  { // ID: 953
    registry[953] = std::make_shared<RabbitSpawnEggItem>();
  }

  { // ID: 954
    registry[954] = std::make_shared<RavagerSpawnEggItem>();
  }

  { // ID: 955
    registry[955] = std::make_shared<SalmonSpawnEggItem>();
  }

  { // ID: 956
    registry[956] = std::make_shared<SheepSpawnEggItem>();
  }

  { // ID: 957
    registry[957] = std::make_shared<ShulkerSpawnEggItem>();
  }

  { // ID: 958
    registry[958] = std::make_shared<SilverfishSpawnEggItem>();
  }

  { // ID: 959
    registry[959] = std::make_shared<SkeletonSpawnEggItem>();
  }

  { // ID: 960
    registry[960] = std::make_shared<SkeletonHorseSpawnEggItem>();
  }

  { // ID: 961
    registry[961] = std::make_shared<SlimeSpawnEggItem>();
  }

  { // ID: 962
    registry[962] = std::make_shared<SpiderSpawnEggItem>();
  }

  { // ID: 963
    registry[963] = std::make_shared<SquidSpawnEggItem>();
  }

  { // ID: 964
    registry[964] = std::make_shared<StraySpawnEggItem>();
  }

  { // ID: 965
    registry[965] = std::make_shared<StriderSpawnEggItem>();
  }

  { // ID: 966
    registry[966] = std::make_shared<TadpoleSpawnEggItem>();
  }

  { // ID: 967
    registry[967] = std::make_shared<TraderLlamaSpawnEggItem>();
  }

  { // ID: 968
    registry[968] = std::make_shared<TropicalFishSpawnEggItem>();
  }

  { // ID: 969
    registry[969] = std::make_shared<TurtleSpawnEggItem>();
  }

  { // ID: 970
    registry[970] = std::make_shared<VexSpawnEggItem>();
  }

  { // ID: 971
    registry[971] = std::make_shared<VillagerSpawnEggItem>();
  }

  { // ID: 972
    registry[972] = std::make_shared<VindicatorSpawnEggItem>();
  }

  { // ID: 973
    registry[973] = std::make_shared<WanderingTraderSpawnEggItem>();
  }

  { // ID: 974
    registry[974] = std::make_shared<WardenSpawnEggItem>();
  }

  { // ID: 975
    registry[975] = std::make_shared<WitchSpawnEggItem>();
  }

  { // ID: 976
    registry[976] = std::make_shared<WitherSkeletonSpawnEggItem>();
  }

  { // ID: 977
    registry[977] = std::make_shared<WolfSpawnEggItem>();
  }

  { // ID: 978
    registry[978] = std::make_shared<ZoglinSpawnEggItem>();
  }

  { // ID: 979
    registry[979] = std::make_shared<ZombieSpawnEggItem>();
  }

  { // ID: 980
    registry[980] = std::make_shared<ZombieHorseSpawnEggItem>();
  }

  { // ID: 981
    registry[981] = std::make_shared<ZombieVillagerSpawnEggItem>();
  }

  { // ID: 982
    registry[982] = std::make_shared<ZombifiedPiglinSpawnEggItem>();
  }

  { // ID: 983
    registry[983] = std::make_shared<ExperienceBottleItem>();
  }

  { // ID: 984
    registry[984] = std::make_shared<FireChargeItem>();
  }

  { // ID: 985
    registry[985] = std::make_shared<WritableBookItem>();
  }

  { // ID: 986
    registry[986] = std::make_shared<WrittenBookItem>();
  }

  { // ID: 987
    registry[987] = std::make_shared<ItemFrameItem>();
  }

  { // ID: 988
    registry[988] = std::make_shared<GlowItemFrameItem>();
  }

  { // ID: 989
    registry[989] = std::make_shared<FlowerPotItem>();
  }

  { // ID: 990
    registry[990] = std::make_shared<CarrotItem>();
  }

  { // ID: 991
    registry[991] = std::make_shared<PotatoItem>();
  }

  { // ID: 992
    registry[992] = std::make_shared<BakedPotatoItem>();
  }

  { // ID: 993
    registry[993] = std::make_shared<PoisonousPotatoItem>();
  }

  { // ID: 994
    registry[994] = std::make_shared<MapItem>();
  }

  { // ID: 995
    registry[995] = std::make_shared<GoldenCarrotItem>();
  }

  { // ID: 996
    registry[996] = std::make_shared<SkeletonSkullItem>();
  }

  { // ID: 997
    registry[997] = std::make_shared<WitherSkeletonSkullItem>();
  }

  { // ID: 998
    registry[998] = std::make_shared<PlayerHeadItem>();
  }

  { // ID: 999
    registry[999] = std::make_shared<ZombieHeadItem>();
  }

  { // ID: 1000
    registry[1000] = std::make_shared<CreeperHeadItem>();
  }

  { // ID: 1001
    registry[1001] = std::make_shared<DragonHeadItem>();
  }

  { // ID: 1002
    registry[1002] = std::make_shared<NetherStarItem>();
  }

  { // ID: 1003
    registry[1003] = std::make_shared<PumpkinPieItem>();
  }

  { // ID: 1004
    registry[1004] = std::make_shared<FireworkRocketItem>();
  }

  { // ID: 1005
    registry[1005] = std::make_shared<FireworkStarItem>();
  }

  { // ID: 1006
    registry[1006] = std::make_shared<EnchantedBookItem>();
  }

  { // ID: 1007
    registry[1007] = std::make_shared<NetherBrickItem>();
  }

  { // ID: 1008
    registry[1008] = std::make_shared<PrismarineShardItem>();
  }

  { // ID: 1009
    registry[1009] = std::make_shared<PrismarineCrystalsItem>();
  }

  { // ID: 1010
    registry[1010] = std::make_shared<RabbitItem>();
  }

  { // ID: 1011
    registry[1011] = std::make_shared<CookedRabbitItem>();
  }

  { // ID: 1012
    registry[1012] = std::make_shared<RabbitStewItem>();
  }

  { // ID: 1013
    registry[1013] = std::make_shared<RabbitFootItem>();
  }

  { // ID: 1014
    registry[1014] = std::make_shared<RabbitHideItem>();
  }

  { // ID: 1015
    registry[1015] = std::make_shared<ArmorStandItem>();
  }

  { // ID: 1016
    registry[1016] = std::make_shared<IronHorseArmorItem>();
  }

  { // ID: 1017
    registry[1017] = std::make_shared<GoldenHorseArmorItem>();
  }

  { // ID: 1018
    registry[1018] = std::make_shared<DiamondHorseArmorItem>();
  }

  { // ID: 1019
    registry[1019] = std::make_shared<LeatherHorseArmorItem>();
  }

  { // ID: 1020
    registry[1020] = std::make_shared<LeadItem>();
  }

  { // ID: 1021
    registry[1021] = std::make_shared<NameTagItem>();
  }

  { // ID: 1022
    registry[1022] = std::make_shared<CommandBlockMinecartItem>();
  }

  { // ID: 1023
    registry[1023] = std::make_shared<MuttonItem>();
  }

  { // ID: 1024
    registry[1024] = std::make_shared<CookedMuttonItem>();
  }

  { // ID: 1025
    registry[1025] = std::make_shared<WhiteBannerItem>();
  }

  { // ID: 1026
    registry[1026] = std::make_shared<OrangeBannerItem>();
  }

  { // ID: 1027
    registry[1027] = std::make_shared<MagentaBannerItem>();
  }

  { // ID: 1028
    registry[1028] = std::make_shared<LightBlueBannerItem>();
  }

  { // ID: 1029
    registry[1029] = std::make_shared<YellowBannerItem>();
  }

  { // ID: 1030
    registry[1030] = std::make_shared<LimeBannerItem>();
  }

  { // ID: 1031
    registry[1031] = std::make_shared<PinkBannerItem>();
  }

  { // ID: 1032
    registry[1032] = std::make_shared<GrayBannerItem>();
  }

  { // ID: 1033
    registry[1033] = std::make_shared<LightGrayBannerItem>();
  }

  { // ID: 1034
    registry[1034] = std::make_shared<CyanBannerItem>();
  }

  { // ID: 1035
    registry[1035] = std::make_shared<PurpleBannerItem>();
  }

  { // ID: 1036
    registry[1036] = std::make_shared<BlueBannerItem>();
  }

  { // ID: 1037
    registry[1037] = std::make_shared<BrownBannerItem>();
  }

  { // ID: 1038
    registry[1038] = std::make_shared<GreenBannerItem>();
  }

  { // ID: 1039
    registry[1039] = std::make_shared<RedBannerItem>();
  }

  { // ID: 1040
    registry[1040] = std::make_shared<BlackBannerItem>();
  }

  { // ID: 1041
    registry[1041] = std::make_shared<EndCrystalItem>();
  }

  { // ID: 1042
    registry[1042] = std::make_shared<ChorusFruitItem>();
  }

  { // ID: 1043
    registry[1043] = std::make_shared<PoppedChorusFruitItem>();
  }

  { // ID: 1044
    registry[1044] = std::make_shared<BeetrootItem>();
  }

  { // ID: 1045
    registry[1045] = std::make_shared<BeetrootSeedsItem>();
  }

  { // ID: 1046
    registry[1046] = std::make_shared<BeetrootSoupItem>();
  }

  { // ID: 1047
    registry[1047] = std::make_shared<DragonBreathItem>();
  }

  { // ID: 1048
    registry[1048] = std::make_shared<SplashPotionItem>();
  }

  { // ID: 1049
    registry[1049] = std::make_shared<SpectralArrowItem>();
  }

  { // ID: 1050
    registry[1050] = std::make_shared<TippedArrowItem>();
  }

  { // ID: 1051
    registry[1051] = std::make_shared<LingeringPotionItem>();
  }

  { // ID: 1052
    registry[1052] = std::make_shared<ShieldItem>();
  }

  { // ID: 1053
    registry[1053] = std::make_shared<TotemOfUndyingItem>();
  }

  { // ID: 1054
    registry[1054] = std::make_shared<ShulkerShellItem>();
  }

  { // ID: 1055
    registry[1055] = std::make_shared<IronNuggetItem>();
  }

  { // ID: 1056
    registry[1056] = std::make_shared<KnowledgeBookItem>();
  }

  { // ID: 1057
    registry[1057] = std::make_shared<DebugStickItem>();
  }

  { // ID: 1058
    registry[1058] = std::make_shared<MusicDisc13Item>();
  }

  { // ID: 1059
    registry[1059] = std::make_shared<MusicDiscCatItem>();
  }

  { // ID: 1060
    registry[1060] = std::make_shared<MusicDiscBlocksItem>();
  }

  { // ID: 1061
    registry[1061] = std::make_shared<MusicDiscChirpItem>();
  }

  { // ID: 1062
    registry[1062] = std::make_shared<MusicDiscFarItem>();
  }

  { // ID: 1063
    registry[1063] = std::make_shared<MusicDiscMallItem>();
  }

  { // ID: 1064
    registry[1064] = std::make_shared<MusicDiscMellohiItem>();
  }

  { // ID: 1065
    registry[1065] = std::make_shared<MusicDiscStalItem>();
  }

  { // ID: 1066
    registry[1066] = std::make_shared<MusicDiscStradItem>();
  }

  { // ID: 1067
    registry[1067] = std::make_shared<MusicDiscWardItem>();
  }

  { // ID: 1068
    registry[1068] = std::make_shared<MusicDisc11Item>();
  }

  { // ID: 1069
    registry[1069] = std::make_shared<MusicDiscWaitItem>();
  }

  { // ID: 1070
    registry[1070] = std::make_shared<MusicDiscOthersideItem>();
  }

  { // ID: 1071
    registry[1071] = std::make_shared<MusicDisc5Item>();
  }

  { // ID: 1072
    registry[1072] = std::make_shared<MusicDiscPigstepItem>();
  }

  { // ID: 1073
    registry[1073] = std::make_shared<DiscFragment5Item>();
  }

  { // ID: 1074
    registry[1074] = std::make_shared<TridentItem>();
  }

  { // ID: 1075
    registry[1075] = std::make_shared<PhantomMembraneItem>();
  }

  { // ID: 1076
    registry[1076] = std::make_shared<NautilusShellItem>();
  }

  { // ID: 1077
    registry[1077] = std::make_shared<HeartOfTheSeaItem>();
  }

  { // ID: 1078
    registry[1078] = std::make_shared<CrossbowItem>();
  }

  { // ID: 1079
    registry[1079] = std::make_shared<SuspiciousStewItem>();
  }

  { // ID: 1080
    registry[1080] = std::make_shared<LoomItem>();
  }

  { // ID: 1081
    registry[1081] = std::make_shared<FlowerBannerPatternItem>();
  }

  { // ID: 1082
    registry[1082] = std::make_shared<CreeperBannerPatternItem>();
  }

  { // ID: 1083
    registry[1083] = std::make_shared<SkullBannerPatternItem>();
  }

  { // ID: 1084
    registry[1084] = std::make_shared<MojangBannerPatternItem>();
  }

  { // ID: 1085
    registry[1085] = std::make_shared<GlobeBannerPatternItem>();
  }

  { // ID: 1086
    registry[1086] = std::make_shared<PiglinBannerPatternItem>();
  }

  { // ID: 1087
    registry[1087] = std::make_shared<GoatHornItem>();
  }

  { // ID: 1088
    registry[1088] = std::make_shared<ComposterItem>();
  }

  { // ID: 1089
    registry[1089] = std::make_shared<BarrelItem>();
  }

  { // ID: 1090
    registry[1090] = std::make_shared<SmokerItem>();
  }

  { // ID: 1091
    registry[1091] = std::make_shared<BlastFurnaceItem>();
  }

  { // ID: 1092
    registry[1092] = std::make_shared<CartographyTableItem>();
  }

  { // ID: 1093
    registry[1093] = std::make_shared<FletchingTableItem>();
  }

  { // ID: 1094
    registry[1094] = std::make_shared<GrindstoneItem>();
  }

  { // ID: 1095
    registry[1095] = std::make_shared<SmithingTableItem>();
  }

  { // ID: 1096
    registry[1096] = std::make_shared<StonecutterItem>();
  }

  { // ID: 1097
    registry[1097] = std::make_shared<BellItem>();
  }

  { // ID: 1098
    registry[1098] = std::make_shared<LanternItem>();
  }

  { // ID: 1099
    registry[1099] = std::make_shared<SoulLanternItem>();
  }

  { // ID: 1100
    registry[1100] = std::make_shared<SweetBerriesItem>();
  }

  { // ID: 1101
    registry[1101] = std::make_shared<GlowBerriesItem>();
  }

  { // ID: 1102
    registry[1102] = std::make_shared<CampfireItem>();
  }

  { // ID: 1103
    registry[1103] = std::make_shared<SoulCampfireItem>();
  }

  { // ID: 1104
    registry[1104] = std::make_shared<ShroomlightItem>();
  }

  { // ID: 1105
    registry[1105] = std::make_shared<HoneycombItem>();
  }

  { // ID: 1106
    registry[1106] = std::make_shared<BeeNestItem>();
  }

  { // ID: 1107
    registry[1107] = std::make_shared<BeehiveItem>();
  }

  { // ID: 1108
    registry[1108] = std::make_shared<HoneyBottleItem>();
  }

  { // ID: 1109
    registry[1109] = std::make_shared<HoneycombBlockItem>();
  }

  { // ID: 1110
    registry[1110] = std::make_shared<LodestoneItem>();
  }

  { // ID: 1111
    registry[1111] = std::make_shared<CryingObsidianItem>();
  }

  { // ID: 1112
    registry[1112] = std::make_shared<BlackstoneItem>();
  }

  { // ID: 1113
    registry[1113] = std::make_shared<BlackstoneSlabItem>();
  }

  { // ID: 1114
    registry[1114] = std::make_shared<BlackstoneStairsItem>();
  }

  { // ID: 1115
    registry[1115] = std::make_shared<GildedBlackstoneItem>();
  }

  { // ID: 1116
    registry[1116] = std::make_shared<PolishedBlackstoneItem>();
  }

  { // ID: 1117
    registry[1117] = std::make_shared<PolishedBlackstoneSlabItem>();
  }

  { // ID: 1118
    registry[1118] = std::make_shared<PolishedBlackstoneStairsItem>();
  }

  { // ID: 1119
    registry[1119] = std::make_shared<ChiseledPolishedBlackstoneItem>();
  }

  { // ID: 1120
    registry[1120] = std::make_shared<PolishedBlackstoneBricksItem>();
  }

  { // ID: 1121
    registry[1121] = std::make_shared<PolishedBlackstoneBrickSlabItem>();
  }

  { // ID: 1122
    registry[1122] = std::make_shared<PolishedBlackstoneBrickStairsItem>();
  }

  { // ID: 1123
    registry[1123] = std::make_shared<CrackedPolishedBlackstoneBricksItem>();
  }

  { // ID: 1124
    registry[1124] = std::make_shared<RespawnAnchorItem>();
  }

  { // ID: 1125
    registry[1125] = std::make_shared<CandleItem>();
  }

  { // ID: 1126
    registry[1126] = std::make_shared<WhiteCandleItem>();
  }

  { // ID: 1127
    registry[1127] = std::make_shared<OrangeCandleItem>();
  }

  { // ID: 1128
    registry[1128] = std::make_shared<MagentaCandleItem>();
  }

  { // ID: 1129
    registry[1129] = std::make_shared<LightBlueCandleItem>();
  }

  { // ID: 1130
    registry[1130] = std::make_shared<YellowCandleItem>();
  }

  { // ID: 1131
    registry[1131] = std::make_shared<LimeCandleItem>();
  }

  { // ID: 1132
    registry[1132] = std::make_shared<PinkCandleItem>();
  }

  { // ID: 1133
    registry[1133] = std::make_shared<GrayCandleItem>();
  }

  { // ID: 1134
    registry[1134] = std::make_shared<LightGrayCandleItem>();
  }

  { // ID: 1135
    registry[1135] = std::make_shared<CyanCandleItem>();
  }

  { // ID: 1136
    registry[1136] = std::make_shared<PurpleCandleItem>();
  }

  { // ID: 1137
    registry[1137] = std::make_shared<BlueCandleItem>();
  }

  { // ID: 1138
    registry[1138] = std::make_shared<BrownCandleItem>();
  }

  { // ID: 1139
    registry[1139] = std::make_shared<GreenCandleItem>();
  }

  { // ID: 1140
    registry[1140] = std::make_shared<RedCandleItem>();
  }

  { // ID: 1141
    registry[1141] = std::make_shared<BlackCandleItem>();
  }

  { // ID: 1142
    registry[1142] = std::make_shared<SmallAmethystBudItem>();
  }

  { // ID: 1143
    registry[1143] = std::make_shared<MediumAmethystBudItem>();
  }

  { // ID: 1144
    registry[1144] = std::make_shared<LargeAmethystBudItem>();
  }

  { // ID: 1145
    registry[1145] = std::make_shared<AmethystClusterItem>();
  }

  { // ID: 1146
    registry[1146] = std::make_shared<PointedDripstoneItem>();
  }

  { // ID: 1147
    registry[1147] = std::make_shared<OchreFroglightItem>();
  }

  { // ID: 1148
    registry[1148] = std::make_shared<VerdantFroglightItem>();
  }

  { // ID: 1149
    registry[1149] = std::make_shared<PearlescentFroglightItem>();
  }

  { // ID: 1150
    registry[1150] = std::make_shared<FrogspawnItem>();
  }

  { // ID: 1151
    registry[1151] = std::make_shared<EchoShardItem>();
  }
}

std::shared_ptr<Item> ItemRegistry::fromID(int id) {
  if (id < 0 || id >= registry.size()) {
    return registry[0];
  }
  return registry[id];
}

std::shared_ptr<Item> ItemRegistry::newInstanceFromID(int id) {
  return fromID(id)->clone();
}

std::vector<std::shared_ptr<Item>> ItemRegistry::registry;
