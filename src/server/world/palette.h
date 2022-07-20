#pragma once

#include "../../ByteBuffer.h"
#include <set>
#include <vector>

class Palette {
public:
    Palette(int, std::set<int>);
    virtual ~Palette();

public:
    virtual std::vector<unsigned long long> apply(std::vector<int>) = 0;
    virtual void write(ByteBuffer&) = 0;

public:
    int bitsPerEntry;
    std::set<int> palette;

};

class SingleValuedPalette : public Palette {
public:
    explicit SingleValuedPalette(std::set<int>);
    ~SingleValuedPalette() override;

public:
    std::vector<unsigned long long> apply(std::vector<int>) override;
    void write(ByteBuffer&) override;

};

class IndirectPalette : public Palette {
public:
    IndirectPalette(int, std::set<int>);
    ~IndirectPalette() override;

public:
    std::vector<unsigned long long> apply(std::vector<int>) override;
    void write(ByteBuffer&) override;

};

class DirectPalette : public Palette {
public:
    DirectPalette();
    ~DirectPalette() override;

public:
    std::vector<unsigned long long> apply(std::vector<int>) override;
    void write(ByteBuffer&) override;

};