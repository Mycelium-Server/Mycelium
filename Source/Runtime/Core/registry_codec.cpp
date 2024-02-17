

#include "registry_codec.h"

static ByteBuffer* registry_codec = nullptr;

ByteBuffer* default_registry_codec() {
  if (!registry_codec) {
    registry_codec = new ByteBuffer("registry_codec.nbt");
  }

  return registry_codec;
}