
#include "noise.h"

#include "../PerlinNoise.h"

#include <algorithm>

using default_random_engine = std::mt19937;
using seed_type = typename default_random_engine::result_type;

double terrainNoise(double nx, double ny, int seed) {
  const siv::PerlinNoise perlin{ static_cast<seed_type>(seed) };

  double base = perlin.noise3D(nx / 4, ny / 4, 0) / 2.0 + 0.5 +
                std::max(0.0, perlin.noise3D(nx / 4, 0, ny / 4) * 2) * 0;
  double hill = perlin.noise3D(nx / 4, ny / 4, 0);
  return base * hill;
}
