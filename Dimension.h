#ifndef MYCELIUM_DIMENSION_H
#define MYCELIUM_DIMENSION_H

#include "NBT.h"

enum DEFAULT_WORLD {
    WORLD_OVERWORLD = 0,
    WORLD_OVERWORLD_CAVES = 1,
    WORLD_THE_NETHER = 2,
    WORLD_THE_END = 3
};

std::string default_world_name(DEFAULT_WORLD world) {
    switch(world) {
        case WORLD_OVERWORLD: return "minecraft:overworld";
        case WORLD_OVERWORLD_CAVES: return "minecraft:overworld_caves";
        case WORLD_THE_NETHER: return "minecraft:the_nether";
        case WORLD_THE_END: return "minecraft:the_end";
        default: return "";
    }
}

std::shared_ptr<TAG_Compound> get_dimension_nbt(DEFAULT_WORLD world) {
    switch(world) {
        case WORLD_OVERWORLD:
            return std::make_shared<TAG_Compound>(NBT_Components {
                    std::make_shared<TAG_Byte>("piglin_safe", 0),
                    std::make_shared<TAG_Byte>("natural", 1),
                    std::make_shared<TAG_Float>("ambient_light", 0),
                    std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_overworld"),
                    std::make_shared<TAG_Byte>("respawn_anchor_works", 0),
                    std::make_shared<TAG_Byte>("has_skylight", 1),
                    std::make_shared<TAG_Byte>("bed_works", 1),
                    std::make_shared<TAG_String>("effects", "minecraft:overworld"),
                    std::make_shared<TAG_Byte>("has_raids", 1),
                    std::make_shared<TAG_Int>("min_y", -64),
                    std::make_shared<TAG_Int>("height", 384),
                    std::make_shared<TAG_Int>("logical_height", 384),
                    std::make_shared<TAG_Double>("coordinate_scale", 1),
                    std::make_shared<TAG_Byte>("ultrawarm", 0),
                    std::make_shared<TAG_Byte>("has_ceiling", 1)
            });
        case WORLD_OVERWORLD_CAVES:
            return std::make_shared<TAG_Compound>(NBT_Components {
                    std::make_shared<TAG_Float>("ambient_light", 0.f),
                    std::make_shared<TAG_Byte>("bed_works", 1),
                    std::make_shared<TAG_Double>("coordinate_scale", 1),
                    std::make_shared<TAG_String>("effects", "minecraft:overworld"),
                    std::make_shared<TAG_Byte>("has_ceiling", 1),
                    std::make_shared<TAG_Byte>("has_raids", 1),
                    std::make_shared<TAG_Byte>("has_skylight", 1),
                    std::make_shared<TAG_Int>("height", 384),
                    std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_overworld"),
                    std::make_shared<TAG_Int>("logical_height", 384),
                    std::make_shared<TAG_Int>("min_y", -64),
                    std::make_shared<TAG_Byte>("natural", 1),
                    std::make_shared<TAG_Byte>("piglin_safe", 0),
                    std::make_shared<TAG_Byte>("respawn_anchor_works", 0),
                    std::make_shared<TAG_Byte>("ultrawarm", 0)
            });
        case WORLD_THE_NETHER:
            return std::make_shared<TAG_Compound>(NBT_Components {
                    std::make_shared<TAG_Float>("ambient_light", 0.1f),
                    std::make_shared<TAG_Byte>("bed_works", 0),
                    std::make_shared<TAG_Double>("coordinate_scale", 8),
                    std::make_shared<TAG_String>("effects", "minecraft:the_nether"),
                    std::make_shared<TAG_Long>("fixed_time", 18000),
                    std::make_shared<TAG_Byte>("has_ceiling", 1),
                    std::make_shared<TAG_Byte>("has_raids", 0),
                    std::make_shared<TAG_Byte>("has_skylight", 0),
                    std::make_shared<TAG_Int>("height", 256),
                    std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_nether"),
                    std::make_shared<TAG_Int>("logical_height", 128),
                    std::make_shared<TAG_Int>("min_y", 0),
                    std::make_shared<TAG_Byte>("natural", 0),
                    std::make_shared<TAG_Byte>("piglin_safe", 1),
                    std::make_shared<TAG_Byte>("respawn_anchor_works", 1),
                    std::make_shared<TAG_Byte>("ultrawarm", 1)
            });
        case WORLD_THE_END:
            return std::make_shared<TAG_Compound>(NBT_Components {
                    std::make_shared<TAG_Float>("ambient_light", 0.f),
                    std::make_shared<TAG_Byte>("bed_works", 0),
                    std::make_shared<TAG_Double>("coordinate_scale", 1),
                    std::make_shared<TAG_String>("effects", "minecraft:the_end"),
                    std::make_shared<TAG_Long>("fixed_time", 6000),
                    std::make_shared<TAG_Byte>("has_ceiling", 0),
                    std::make_shared<TAG_Byte>("has_raids", 1),
                    std::make_shared<TAG_Byte>("has_skylight", 0),
                    std::make_shared<TAG_Int>("height", 256),
                    std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_end"),
                    std::make_shared<TAG_Int>("logical_height", 256),
                    std::make_shared<TAG_Int>("min_y", 0),
                    std::make_shared<TAG_Byte>("natural", 0),
                    std::make_shared<TAG_Byte>("piglin_safe", 0),
                    std::make_shared<TAG_Byte>("respawn_anchor_works", 0),
                    std::make_shared<TAG_Byte>("ultrawarm", 0)
            });
    }
}

std::shared_ptr<TAG_Compound> default_dimension_codec() {
    return std::make_shared<TAG_Compound>(NBT_Components{
            std::make_shared<TAG_Compound>("minecraft:dimension_type", NBT_Components{
                    std::make_shared<TAG_String>("type", "minecraft:dimension_type"),
                    std::make_shared<TAG_List>("value", Type_TAG_Compound, NBT_Components{
                            std::make_shared<TAG_Compound>(NBT_Components {
                                    std::make_shared<TAG_String>("name", "minecraft:overworld"),
                                    std::make_shared<TAG_Int>("id", 0),
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_Byte>("piglin_safe", 0),
                                            std::make_shared<TAG_Byte>("natural", 1),
                                            std::make_shared<TAG_Float>("ambient_light", 0),
                                            std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_overworld"),
                                            std::make_shared<TAG_Byte>("respawn_anchor_works", 0),
                                            std::make_shared<TAG_Byte>("has_skylight", 1),
                                            std::make_shared<TAG_Byte>("bed_works", 1),
                                            std::make_shared<TAG_String>("effects", "minecraft:overworld"),
                                            std::make_shared<TAG_Byte>("has_raids", 1),
                                            std::make_shared<TAG_Int>("min_y", -64),
                                            std::make_shared<TAG_Int>("height", 384),
                                            std::make_shared<TAG_Int>("logical_height", 384),
                                            std::make_shared<TAG_Double>("coordinate_scale", 1),
                                            std::make_shared<TAG_Byte>("ultrawarm", 0),
                                            std::make_shared<TAG_Byte>("has_ceiling", 1)
                                    })
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components {
                                    std::make_shared<TAG_String>("name", "minecraft:overworld_caves"),
                                    std::make_shared<TAG_Int>("id", 1),
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_Float>("ambient_light", 0.f),
                                            std::make_shared<TAG_Byte>("bed_works", 1),
                                            std::make_shared<TAG_Double>("coordinate_scale", 1),
                                            std::make_shared<TAG_String>("effects", "minecraft:overworld"),
                                            std::make_shared<TAG_Byte>("has_ceiling", 1),
                                            std::make_shared<TAG_Byte>("has_raids", 1),
                                            std::make_shared<TAG_Byte>("has_skylight", 1),
                                            std::make_shared<TAG_Int>("height", 384),
                                            std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_overworld"),
                                            std::make_shared<TAG_Int>("logical_height", 384),
                                            std::make_shared<TAG_Int>("min_y", -64),
                                            std::make_shared<TAG_Byte>("natural", 1),
                                            std::make_shared<TAG_Byte>("piglin_safe", 0),
                                            std::make_shared<TAG_Byte>("respawn_anchor_works", 0),
                                            std::make_shared<TAG_Byte>("ultrawarm", 0)
                                    })
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components {
                                    std::make_shared<TAG_String>("name", "minecraft:the_nether"),
                                    std::make_shared<TAG_Int>("id", 2),
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_Float>("ambient_light", 0.1f),
                                            std::make_shared<TAG_Byte>("bed_works", 0),
                                            std::make_shared<TAG_Double>("coordinate_scale", 8),
                                            std::make_shared<TAG_String>("effects", "minecraft:the_nether"),
                                            std::make_shared<TAG_Long>("fixed_time", 18000),
                                            std::make_shared<TAG_Byte>("has_ceiling", 1),
                                            std::make_shared<TAG_Byte>("has_raids", 0),
                                            std::make_shared<TAG_Byte>("has_skylight", 0),
                                            std::make_shared<TAG_Int>("height", 256),
                                            std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_nether"),
                                            std::make_shared<TAG_Int>("logical_height", 128),
                                            std::make_shared<TAG_Int>("min_y", 0),
                                            std::make_shared<TAG_Byte>("natural", 0),
                                            std::make_shared<TAG_Byte>("piglin_safe", 1),
                                            std::make_shared<TAG_Byte>("respawn_anchor_works", 1),
                                            std::make_shared<TAG_Byte>("ultrawarm", 1)
                                    })
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components {
                                    std::make_shared<TAG_String>("name", "minecraft:the_end"),
                                    std::make_shared<TAG_Int>("id", 3),
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_Float>("ambient_light", 0.f),
                                            std::make_shared<TAG_Byte>("bed_works", 0),
                                            std::make_shared<TAG_Double>("coordinate_scale", 1),
                                            std::make_shared<TAG_String>("effects", "minecraft:the_end"),
                                            std::make_shared<TAG_Long>("fixed_time", 6000),
                                            std::make_shared<TAG_Byte>("has_ceiling", 0),
                                            std::make_shared<TAG_Byte>("has_raids", 1),
                                            std::make_shared<TAG_Byte>("has_skylight", 0),
                                            std::make_shared<TAG_Int>("height", 256),
                                            std::make_shared<TAG_String>("infiniburn", "#minecraft:infiniburn_end"),
                                            std::make_shared<TAG_Int>("logical_height", 256),
                                            std::make_shared<TAG_Int>("min_y", 0),
                                            std::make_shared<TAG_Byte>("natural", 0),
                                            std::make_shared<TAG_Byte>("piglin_safe", 0),
                                            std::make_shared<TAG_Byte>("respawn_anchor_works", 0),
                                            std::make_shared<TAG_Byte>("ultrawarm", 0)
                                    })
                            }),
                    })
            }),
            std::make_shared<TAG_Compound>("minecraft:worldgen/biome", NBT_Components{
                    std::make_shared<TAG_String>("type", "minecraft:worldgen/biome"),
                    std::make_shared<TAG_List>("value", Type_TAG_Compound, NBT_Components {
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "none"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 0),
                                    std::make_shared<TAG_String>("name", "minecraft:the_void")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "plains"),
                                            std::make_shared<TAG_Float>("downfall", 0.4f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7907327),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.8f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 1),
                                    std::make_shared<TAG_String>("name", "minecraft:plains")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "plains"),
                                            std::make_shared<TAG_Float>("downfall", 0.4f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7907327),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.8f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 2),
                                    std::make_shared<TAG_String>("name", "minecraft:sunflower_plains")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "icy"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8364543),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", 0.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 3),
                                    std::make_shared<TAG_String>("name", "minecraft:snowy_plains")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "icy"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8364543),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", 0.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 4),
                                    std::make_shared<TAG_String>("name", "minecraft:ice_spikes")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "desert"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 5),
                                    std::make_shared<TAG_String>("name", "minecraft:desert")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "swamp"),
                                            std::make_shared<TAG_Float>("downfall", 0.9f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Int>("foliage_color", 6975545),
                                                    std::make_shared<TAG_String>("grass_color_modifier", "swamp"),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7907327),
                                                    std::make_shared<TAG_Int>("water_color", 6388580),
                                                    std::make_shared<TAG_Int>("water_fog_color", 2302743)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.8f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 6),
                                    std::make_shared<TAG_String>("name", "minecraft:swamp")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "forest"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7972607),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.7f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 7),
                                    std::make_shared<TAG_String>("name", "minecraft:forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "forest"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7972607),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.7f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 8),
                                    std::make_shared<TAG_String>("name", "minecraft:flower_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "forest"),
                                            std::make_shared<TAG_Float>("downfall", 0.6f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8037887),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.6f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 9),
                                    std::make_shared<TAG_String>("name", "minecraft:birch_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "forest"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_String>("grass_color_modifier", "dark_forest"),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7972507),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.7f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 10),
                                    std::make_shared<TAG_String>("name", "minecraft:dark_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "forest"),
                                            std::make_shared<TAG_Float>("downfall", 0.6f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8037887),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.6f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 11),
                                    std::make_shared<TAG_String>("name", "minecraft:old_growth_birch_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "taiga"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8168447),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.3f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 12),
                                    std::make_shared<TAG_String>("name", "minecraft:old_growth_pine_taiga")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "taiga"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8233983),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.25f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 13),
                                    std::make_shared<TAG_String>("name", "minecraft:old_growth_spruce_taiga")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "taiga"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8233983),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.25f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 14),
                                    std::make_shared<TAG_String>("name", "minecraft:taiga")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "taiga"),
                                            std::make_shared<TAG_Float>("downfall", 0.4f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8625919),
                                                    std::make_shared<TAG_Int>("water_color", 4020182),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", -0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 15),
                                    std::make_shared<TAG_String>("name", "minecraft:snowy_taiga")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "savanna"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 16),
                                    std::make_shared<TAG_String>("name", "minecraft:savanna")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "savanna"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 17),
                                    std::make_shared<TAG_String>("name", "minecraft:savanna_plateau")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "extreme_hills"),
                                            std::make_shared<TAG_Float>("downfall", 0.3f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8233727),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.2f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 18),
                                    std::make_shared<TAG_String>("name", "minecraft:windswept_hills")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "extreme_hills"),
                                            std::make_shared<TAG_Float>("downfall", 0.3f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8233727),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.2f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 19),
                                    std::make_shared<TAG_String>("name", "minecraft:windswept_gravelly_hills")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "extreme_hills"),
                                            std::make_shared<TAG_Float>("downfall", 0.3f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8233727),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.2f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 20),
                                    std::make_shared<TAG_String>("name", "minecraft:windswept_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "savanna"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254537),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 21),
                                    std::make_shared<TAG_String>("name", "minecraft:windswept_savanna")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "jungle"),
                                            std::make_shared<TAG_Float>("downfall", 0.9f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7842047),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.95f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 22),
                                    std::make_shared<TAG_String>("name", "minecraft:jungle")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "jungle"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7842047),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.95f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 23),
                                    std::make_shared<TAG_String>("name", "minecraft:sparse_jungle")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "jungle"),
                                            std::make_shared<TAG_Float>("downfall", 0.9f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7842047),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.95f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 24),
                                    std::make_shared<TAG_String>("name", "minecraft:bamboo_jungle")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mesa"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 25),
                                    std::make_shared<TAG_String>("name", "minecraft:badlands")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mesa"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 26),
                                    std::make_shared<TAG_String>("name", "minecraft:eroded_badlands")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mesa"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 27),
                                    std::make_shared<TAG_String>("name", "minecraft:wooded_badlands")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mountain"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.meadow")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 937679),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 28),
                                    std::make_shared<TAG_String>("name", "minecraft:meadow")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "forest"),
                                            std::make_shared<TAG_Float>("downfall", 0.8f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.grove")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8495359),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", -0.2f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 29),
                                    std::make_shared<TAG_String>("name", "minecraft:grove")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mountain"),
                                            std::make_shared<TAG_Float>("downfall", 0.9f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.snowy_slopes")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8560639),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", -0.3f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 30),
                                    std::make_shared<TAG_String>("name", "minecraft:snowy_slopes")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mountain"),
                                            std::make_shared<TAG_Float>("downfall", 0.9f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.frozen_peaks")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8756735),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", -0.7f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 31),
                                    std::make_shared<TAG_String>("name", "minecraft:frozen_peaks")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mountain"),
                                            std::make_shared<TAG_Float>("downfall", 0.9f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.jagged_peaks")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8756735),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", -0.7f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 32),
                                    std::make_shared<TAG_String>("name", "minecraft:jagged_peaks")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mountain"),
                                            std::make_shared<TAG_Float>("downfall", 0.3f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.stony_peaks")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7776511),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 1.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 33),
                                    std::make_shared<TAG_String>("name", "minecraft:stony_peaks")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "river"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 34),
                                    std::make_shared<TAG_String>("name", "minecraft:river")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "river"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8364543),
                                                    std::make_shared<TAG_Int>("water_color", 3750089),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", 0.0f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 35),
                                    std::make_shared<TAG_String>("name", "minecraft:frozen_river")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "beach"),
                                            std::make_shared<TAG_Float>("downfall", 0.4f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7907327),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.8f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 36),
                                    std::make_shared<TAG_String>("name", "minecraft:beach")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "beach"),
                                            std::make_shared<TAG_Float>("downfall", 0.3f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8364543),
                                                    std::make_shared<TAG_Int>("water_color", 4020182),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", 0.05f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 37),
                                    std::make_shared<TAG_String>("name", "minecraft:snowy_beach")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "beach"),
                                            std::make_shared<TAG_Float>("downfall", 0.3f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8233727),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.2f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 38),
                                    std::make_shared<TAG_String>("name", "minecraft:stony_shore")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4445678),
                                                    std::make_shared<TAG_Int>("water_fog_color", 270131)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 39),
                                    std::make_shared<TAG_String>("name", "minecraft:warm_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4566514),
                                                    std::make_shared<TAG_Int>("water_fog_color", 267827)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 40),
                                    std::make_shared<TAG_String>("name", "minecraft:lukewarm_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4566514),
                                                    std::make_shared<TAG_Int>("water_fog_color", 267827)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 41),
                                    std::make_shared<TAG_String>("name", "minecraft:deep_lukewarm_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 42),
                                    std::make_shared<TAG_String>("name", "minecraft:ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 43),
                                    std::make_shared<TAG_String>("name", "minecraft:deep_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4020182),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 44),
                                    std::make_shared<TAG_String>("name", "minecraft:cold_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4020182),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f)
                                    }),
                                    std::make_shared<TAG_Int>("id", 45),
                                    std::make_shared<TAG_String>("name", "minecraft:deep_cold_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8364543),
                                                    std::make_shared<TAG_Int>("water_color", 3750089),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "snow"),
                                            std::make_shared<TAG_Float>("temperature", 0.0f),
                                            std::make_shared<TAG_String>("temperature_modifier", "frozen")
                                    }),
                                    std::make_shared<TAG_Int>("id", 46),
                                    std::make_shared<TAG_String>("name", "minecraft:frozen_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "ocean"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 3750089),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                            std::make_shared<TAG_String>("temperature_modifier", "frozen")
                                    }),
                                    std::make_shared<TAG_Int>("id", 47),
                                    std::make_shared<TAG_String>("name", "minecraft:deep_frozen_ocean")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "mushroom"),
                                            std::make_shared<TAG_Float>("downfall", 1.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7842047),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.9f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 48),
                                    std::make_shared<TAG_String>("name", "minecraft:mushroom_fields")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "underground"),
                                            std::make_shared<TAG_Float>("downfall", 0.4f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.dripstone_caves")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7907327),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.8f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 49),
                                    std::make_shared<TAG_String>("name", "minecraft:dripstone_caves")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "underground"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 12638463),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.overworld.lush_caves")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 8103167),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "rain"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 50),
                                    std::make_shared<TAG_String>("name", "minecraft:lush_caves")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "nether"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Compound>("additions_sound", NBT_Components {
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.nether_wastes.additions"),
                                                            std::make_shared<TAG_Double>("tick_chance", 0.0111)
                                                    }),
                                                    std::make_shared<TAG_String>("ambient_sound", "minecraft:ambient.nether_wastes.loop"),
                                                    std::make_shared<TAG_Int>("fog_color", 3344392),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.nether_wastes.mood"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.nether.nether_wastes")
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 51),
                                    std::make_shared<TAG_String>("name", "minecraft:nether_wastes")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "nether"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Compound>("additions_sound", NBT_Components {
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.warped_forest.additions"),
                                                            std::make_shared<TAG_Double>("tick_chance", 0.0111)
                                                    }),
                                                    std::make_shared<TAG_String>("ambient_sound", "minecraft:ambient.warped_forest.loop"),
                                                    std::make_shared<TAG_Int>("fog_color", 1705242),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.warped_forest.mood"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.nether.warped_forest")
                                                    }),
                                                    std::make_shared<TAG_Compound>("particle", NBT_Components {
                                                            std::make_shared<TAG_Compound>("options", NBT_Components {
                                                                    std::make_shared<TAG_String>("type", "minecraft:warped_spore")
                                                            }),
                                                            std::make_shared<TAG_Float>("probability", 0.01428f)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 52),
                                    std::make_shared<TAG_String>("name", "minecraft:warped_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "nether"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Compound>("additions_sound", NBT_Components {
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.crimson_forest.additions"),
                                                            std::make_shared<TAG_Double>("tick_chance", 0.0111)
                                                    }),
                                                    std::make_shared<TAG_String>("ambient_sound", "minecraft:ambient.crimson_forest.loop"),
                                                    std::make_shared<TAG_Int>("fog_color", 3343107),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.crimson_forest.mood"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.nether.crimson_forest")
                                                    }),
                                                    std::make_shared<TAG_Compound>("particle", NBT_Components {
                                                            std::make_shared<TAG_Compound>("options", NBT_Components {
                                                                    std::make_shared<TAG_String>("type", "minecraft:crimson_spore")
                                                            }),
                                                            std::make_shared<TAG_Float>("probability", 0.025f)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 53),
                                    std::make_shared<TAG_String>("name", "minecraft:crimson_forest")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "nether"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Compound>("additions_sound", NBT_Components {
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.soul_sand_valley.additions"),
                                                            std::make_shared<TAG_Double>("tick_chance", 0.0111)
                                                    }),
                                                    std::make_shared<TAG_String>("ambient_sound", "minecraft:ambient.soul_sand_valley.loop"),
                                                    std::make_shared<TAG_Int>("fog_color", 1787717),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.soul_sand_valley.mood"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.nether.soul_sand_valley")
                                                    }),
                                                    std::make_shared<TAG_Compound>("particle", NBT_Components {
                                                            std::make_shared<TAG_Compound>("options", NBT_Components {
                                                                    std::make_shared<TAG_String>("type", "minecraft:ash")
                                                            }),
                                                            std::make_shared<TAG_Float>("probability", 0.00625f)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 54),
                                    std::make_shared<TAG_String>("name", "minecraft:soul_sand_valley")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "nether"),
                                            std::make_shared<TAG_Float>("downfall", 0.0f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Compound>("additions_sound", NBT_Components {
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.basalt_deltas.additions"),
                                                            std::make_shared<TAG_Double>("tick_chance", 0.0111)
                                                    }),
                                                    std::make_shared<TAG_String>("ambient_sound", "minecraft:ambient.basalt_deltas.loop"),
                                                    std::make_shared<TAG_Int>("fog_color", 6840176),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.basalt_deltas.mood"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Compound>("music", NBT_Components {
                                                            std::make_shared<TAG_Int>("max_delay", 24000),
                                                            std::make_shared<TAG_Int>("min_delay", 12000),
                                                            std::make_shared<TAG_Byte>("replace_current_music", 0),
                                                            std::make_shared<TAG_String>("sound", "minecraft:music.nether.basalt_deltas")
                                                    }),
                                                    std::make_shared<TAG_Compound>("particle", NBT_Components {
                                                            std::make_shared<TAG_Compound>("options", NBT_Components {
                                                                    std::make_shared<TAG_String>("type", "minecraft:white_ash")
                                                            }),
                                                            std::make_shared<TAG_Float>("probability", 0.118093334f)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 7254527),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 2.0f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 55),
                                    std::make_shared<TAG_String>("name", "minecraft:basalt_deltas")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "the_end"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 10518688),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 0),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 56),
                                    std::make_shared<TAG_String>("name", "minecraft:the_end")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "the_end"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 10518688),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 0),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 57),
                                    std::make_shared<TAG_String>("name", "minecraft:end_highlands")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "the_end"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 10518688),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 0),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 58),
                                    std::make_shared<TAG_String>("name", "minecraft:end_midlands")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "the_end"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 10518688),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 0),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 59),
                                    std::make_shared<TAG_String>("name", "minecraft:small_end_islands")
                            }),
                            std::make_shared<TAG_Compound>(NBT_Components{
                                    std::make_shared<TAG_Compound>("element", NBT_Components {
                                            std::make_shared<TAG_String>("category", "the_end"),
                                            std::make_shared<TAG_Float>("downfall", 0.5f),
                                            std::make_shared<TAG_Compound>("effects", NBT_Components {
                                                    std::make_shared<TAG_Int>("fog_color", 10518688),
                                                    std::make_shared<TAG_Compound>("mood_sound", NBT_Components {
                                                            std::make_shared<TAG_Int>("block_search_extent", 8),
                                                            std::make_shared<TAG_Double>("offset", 2),
                                                            std::make_shared<TAG_String>("sound", "minecraft:ambient.cave"),
                                                            std::make_shared<TAG_Int>("tick_delay", 6000)
                                                    }),
                                                    std::make_shared<TAG_Int>("sky_color", 0),
                                                    std::make_shared<TAG_Int>("water_color", 4159204),
                                                    std::make_shared<TAG_Int>("water_fog_color", 329011)
                                            }),
                                            std::make_shared<TAG_String>("precipitation", "none"),
                                            std::make_shared<TAG_Float>("temperature", 0.5f),
                                    }),
                                    std::make_shared<TAG_Int>("id", 60),
                                    std::make_shared<TAG_String>("name", "minecraft:end_barrens")
                            }),
                    })
            })
    });
}

std::vector<std::string> default_dimension_names() {
    return {
        "minecraft:overworld",
        "minecraft:overworld_caves",
        "minecraft:the_nether",
        "minecraft:the_end"
    };
}

#endif //MYCELIUM_DIMENSION_H
