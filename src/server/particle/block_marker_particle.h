#pragma once

#include "particle.h"

class BlockMarkerParticle : public AbstractParticle {
public:
    BlockMarkerParticle();
    ~BlockMarkerParticle() override;

public:
    void writeData(ByteBuffer&) override;
    [[nodiscard]] int getParticleID() const override;

public:
    int blockState; // TODO: BlockState/Block class/enum/struct

};