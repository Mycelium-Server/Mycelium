#pragma once

#include "../network/byte_buffer.h"

#define DECL_DEFAULT_PARTICLE(className)      \
  class className : public AbstractParticle { \
   public:                                    \
    className();                              \
    ~className() override;                    \
                                              \
   public:                                    \
    void writeData(ByteBuffer&) override;     \
    [[nodiscard]] int getParticleID()         \
        const override;                       \
  };

#define DEF_DEFAULT_PARTICLE(className, particleID) \
  className::className() = default;                 \
  className::~className() = default;                \
                                                    \
  void className::writeData(ByteBuffer&) {}         \
                                                    \
  int className::getParticleID() const {            \
    return particleID;                              \
  }

class AbstractParticle {
 public:
  AbstractParticle();
  virtual ~AbstractParticle();

 public:
  virtual void write(ByteBuffer&);
  virtual void writeData(ByteBuffer&) = 0;
  [[nodiscard]] virtual int getParticleID() const = 0;
};