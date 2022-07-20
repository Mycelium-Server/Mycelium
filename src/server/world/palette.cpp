#include "palette.h"

#include <utility>
#include <algorithm>

#include <iostream>
#include <bitset>

Palette::Palette(int bpe, std::set<int> palette)
    : bitsPerEntry(bpe), palette(std::move(palette)) {}

Palette::~Palette() = default;

SingleValuedPalette::SingleValuedPalette(std::set<int> palette)
    : Palette(0, std::move(palette)) {}

SingleValuedPalette::~SingleValuedPalette() = default;

std::vector<unsigned long long> SingleValuedPalette::apply(std::vector<int>) {
    return { };
}

void SingleValuedPalette::write(ByteBuffer& out) {
    out.writeVarInt(*palette.begin());
}

IndirectPalette::IndirectPalette(int bpe, std::set<int> palette)
    : Palette(bpe, std::move(palette)) {}

IndirectPalette::~IndirectPalette() = default;

std::vector<unsigned long long> IndirectPalette::apply(std::vector<int> data) {
    std::vector<unsigned long long> dst;
    unsigned long long current = 0;
    int currentBit = 0;

    for (int element : data) {
        auto iter = std::find(palette.begin(), palette.end(), element);
        if (iter == palette.end()) {
            std::cerr << "Invalid element " << element << std::endl;
            return {};
        }
        auto index = (unsigned int) std::distance(palette.begin(), iter);
        current |= ((unsigned long long) index << currentBit);
        currentBit += bitsPerEntry;
        if (currentBit >= 64) {
            dst.push_back(current);
            currentBit = 0;
            current = 0;
        }
    }

    if (current != 0) {
        dst.push_back(current);
    }

    return dst;
}

void IndirectPalette::write(ByteBuffer& out) {
    out.writeVarInt((int) palette.size());
    for (int element : palette) {
        out.writeVarInt(element);
    }
}

DirectPalette::DirectPalette()
    : Palette(15, {}) {}

DirectPalette::~DirectPalette() = default;

std::vector<unsigned long long> DirectPalette::apply(std::vector<int> data) {
    std::vector<unsigned long long> dst;
    unsigned long long current = 0;
    int currentBit = 0;

    for (int element : data) {
        current |= ((unsigned long long) element << currentBit);
        currentBit += bitsPerEntry;
        if (currentBit >= 64) {
            currentBit = 0;
            dst.push_back(current);
            current = 0;
        }
    }

    if (current != 0) {
        dst.push_back(current);
    }

    return dst;
}

void DirectPalette::write(ByteBuffer&) {
    // no fields
}