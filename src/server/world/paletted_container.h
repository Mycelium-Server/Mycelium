#pragma once

#include "../../ByteBuffer.h"
#include "palette.h"
#include <vector>

class PalettedContainer {
public:
    PalettedContainer(Palette*, std::vector<int>);
    ~PalettedContainer();

public:
    [[nodiscard]] std::vector<int> getData() const;
    void setData(std::vector<int>);
    Palette* getPalette();
    void setPalette(Palette*);
    std::vector<unsigned long long> remap();
    void write(ByteBuffer&);

private:
    Palette* palette;
    std::vector<int> data;
    bool dirty = true;
    std::vector<unsigned long long> cache;

};