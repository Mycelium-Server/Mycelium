#pragma once

#include <cstdlib>
#include <memory>
#include <utility>
#include <vector>

#include "NBT.h"
#include "network/byte_buffer.h"

namespace NBTIO {

void writeAnyTag(ByteBuffer&, NBT_Component *);
std::shared_ptr<NBT_Component> readAnyTag(ByteBuffer&);

std::string read_name(ByteBuffer& buf);
std::shared_ptr<NBT_Component> read_raw_data(ByteBuffer& buf, int type);
std::shared_ptr<NBT_Component> read_uncompressed(ByteBuffer&);
std::shared_ptr<NBT_Component> read_gzipped(ByteBuffer&);
std::shared_ptr<NBT_Component> read_zlib(ByteBuffer&);

} // namespace NBTIO
