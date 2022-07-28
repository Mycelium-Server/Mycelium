#pragma once

#include "../../ByteBuffer.h"

#define DEF_DEFAULT_PARTICLE(className, particleID) \
class className : public AbstractParticle {         \
public:                                             \
    className() = default;                          \
    ~className() override = default;                \
                                                    \
public:                                             \
    void writeData(ByteBuffer&) override {}         \
    [[nodiscard]] int getParticleID()               \
                        const override {            \
        return particleID;                          \
    }                                               \
                                                    \
};

class AbstractParticle {
public:
    AbstractParticle();
    virtual ~AbstractParticle();

public:
    virtual void write(ByteBuffer&);
    virtual void writeData(ByteBuffer&) = 0;
    [[nodiscard]] virtual int getParticleID() const = 0;

};