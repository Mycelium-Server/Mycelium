#pragma once

#include <string>
#include "../NBT.h"

struct Dimension {
    std::string name;
    std::string type;
    std::shared_ptr<NBT_Component> nbt;
    long long seed;
    bool isFlat;
    bool isDebug;
};