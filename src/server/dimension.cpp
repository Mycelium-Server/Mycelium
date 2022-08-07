#include "dimension.h"

#include "world/world.h"

const std::vector<Dimension> m_default_dimensions = {
    {"minecraft:overworld", "minecraft:overworld", 0, false, false, new World(/* TODO: To do */)},
    {"minecraft:the_nether", "minecraft:the_nether", 0, false, false, new World(/* TODO: To do */)},
    {"minecraft:the_end", "minecraft:the_end", 0, false, false, new World(/* TODO: To do */)},
    {"minecraft:overworld_caves", "minecraft:overworld_caves", 0, false, false, new World(/* TODO: To do */)},
};
