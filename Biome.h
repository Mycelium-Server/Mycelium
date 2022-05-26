#ifndef MYCELIUM_BIOME_H
#define MYCELIUM_BIOME_H

enum BiomeId {
    minecraft_the_void = 0,
    minecraft_plains = 1,
    minecraft_sunflower_plains = 2,
    minecraft_snowy_plains = 3,
    minecraft_ice_spikes = 4,
    minecraft_desert = 5,
    minecraft_swamp = 6,
    minecraft_forest = 7,
    minecraft_flower_forest = 8,
    minecraft_birch_forest = 9,
    minecraft_dark_forest = 10,
    minecraft_old_growth_birch_forest = 11,
    minecraft_old_growth_pine_taiga = 12,
    minecraft_olg_growth_spruce_taiga = 13,
    minecraft_taiga = 14,
    minecraft_snowy_taiga = 15,
    minecraft_savanna = 16,
    minecraft_savanna_plateau = 17,
    minecraft_windswept_hills = 18,
    minecraft_windswept_gravelly_hills = 19,
    minecraft_windswept_forest = 20,
    minecraft_windswept_savanna = 21,
    minecraft_jungle = 22,
    minecraft_sparse_jungle = 23,
    minecraft_bamboo_jungle = 24,
    minecraft_badlands = 25,
    minecraft_eroded_badlands = 26,
    minecraft_wooded_badlands = 27,
    minecraft_meadow = 28,
    minecraft_grove = 29,
    minecraft_snowy_slopes = 30,
    minecraft_frozen_peaks = 31,
    minecraft_jagged_peaks = 32,
    minecraft_stony_peaks = 33,
    minecraft_river = 34,
    minecraft_frozen_river = 35,
    minecraft_beach = 36,
    minecraft_snowy_beach = 37,
    minecraft_stony_shore = 38,
    minecraft_warm_ocean = 39,
    minecraft_lukewarm_ocean = 40,
    minecraft_deep_lukewarm_ocean = 41,
    minecraft_ocean = 42,
    minecraft_deep_ocean = 43,
    minecraft_cold_ocean = 44,
    minecraft_deep_cold_ocean = 45,
    minecraft_frozen_ocean = 46,
    minecraft_deep_frozen_ocean = 47,
    minecraft_mushroom_fields = 48,
    minecraft_dripstone_caves = 49,
    minecraft_lush_caves = 50,
    minecraft_nether_wastes = 51,
    minecraft_warped_forest = 52,
    minecraft_crimson_forest = 53,
    minecraft_soul_sand_valley = 54,
    minecraft_basalt_deltas = 55,
    minecraft_the_end = 56,
    minecraft_end_highlands = 57,
    minecraft_end_midlands = 58,
    minecraft_small_end_islands = 59,
    minecraft_end_barrens = 60,
    total_count_of_biomes = 61
};

class Biome {
public:
    explicit Biome() : Biome(0) {}
    explicit Biome(int id) : id(id) {}
    [[nodiscard]] int get_id() const { return id; }

    bool equals(const Biome& biome) { return biome.get_id() == id; }

private:
    int id;

};

#endif //MYCELIUM_BIOME_H
