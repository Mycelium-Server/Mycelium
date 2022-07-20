#include "heightmap.h"

Heightmap::Heightmap() = default;
Heightmap::~Heightmap() = default;

void Heightmap::set(short height) {
    data[currentLong] &= ~(((unsigned long long) 0b111111111) << currentBit);
    data[currentLong] |= ((unsigned long long) (height & 0b111111111)) << currentBit;
}

void Heightmap::resetIndex() {
    currentBit = 1;
    currentLong = 0;
}

short Heightmap::next() {
    auto prev = (short) ((data[currentLong] & ((unsigned long long) 0b111111111 << currentBit)) >> currentBit);
    currentBit += 9;
    if (currentBit >= 64) {
        currentBit = 1;
        currentLong++;
    }
    return prev;
}