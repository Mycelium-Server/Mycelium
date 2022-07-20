#pragma once

class Heightmap {
public:
    Heightmap();
    ~Heightmap();

public:
    short next();
    void resetIndex();
    void set(short);

public:
    unsigned long long data[37] {};

private:
    int currentLong = 0;
    int currentBit = 1;

};