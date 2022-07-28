#pragma once

#include "particle.h"

class BlockParticle : public AbstractParticle {
public:
    BlockParticle();
    ~BlockParticle() override;

public:
    void writeData(ByteBuffer&) override;
    [[nodiscard]] int getParticleID() const override;

public:
    int blockState; // TODO: BlockState/Block class/enum/struct

};