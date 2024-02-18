#include "NBTIO.h"

#include <libdeflate.h>

namespace NBTIO {

static libdeflate_decompressor* decompressor = nullptr;

void writeAnyTag(ByteBuffer& buf, NBT_Component *nbt) {
  ByteBuffer nbtByteBuf = nbt->asByteBuffer();
  buf.writeBytes(nbtByteBuf);
}

std::shared_ptr<NBT_Component> readAnyTag(ByteBuffer& buf) {
  if (buf.readableBytes() >= 2) {
    uint8_t b1 = buf.data[buf.readerIdx];
    if (b1 == 31) {
      return read_gzipped(buf);
    } else if (b1 == 120) {
      return read_zlib(buf);
    }
  }
  return read_uncompressed(buf);
}

std::string read_name(ByteBuffer& buf) {
  int length = buf.readShort();
  std::string name;
  for (int i = 0; i < length; i++) name += (char) buf.readByte();
  return name;
}

std::shared_ptr<NBT_Component> read_raw_data(ByteBuffer& buf, int type) {
  switch (type) {
    case 1: {
      return std::make_shared<TAG_Byte>(buf.readByte());
    }

    case 2: {
      return std::make_shared<TAG_Short>(buf.readShort());
    }

    case 3: {
      return std::make_shared<TAG_Int>(buf.readInt());
    }

    case 4: {
      return std::make_shared<TAG_Long>(buf.readLong());
    }

    case 5: {
      return std::make_shared<TAG_Float>(buf.readFloat());
    }

    case 6: {
      return std::make_shared<TAG_Double>(buf.readDouble());
    }

    case 7: {
      int length = buf.readInt();
      std::vector<byte_t> bytes = buf.readBytes(length);
      return std::make_shared<TAG_Byte_Array>(bytes.size(), reinterpret_cast<uint8_t*>(bytes.data()));
    }

    case 8: {
      int length = buf.readByte() << 8 | buf.readByte();
      std::string name;
      for (int i = 0; i < length; i++) name += (char) buf.readByte();
      return std::make_shared<TAG_String>(name);
    }

    case 9: {
      int list_type = buf.readByte();
      int length = buf.readInt();
      if (length <= 0) {
        return std::make_shared<TAG_List>((TAG_TypeID) list_type, NBT_Components {});
      }
      NBT_Components components;
      components.resize(length);
      for (int i = 0; i < length; i++) {
        components[i] = read_raw_data(buf, list_type);
      }
      return std::make_shared<TAG_List>((TAG_TypeID) list_type, components);
    }

    case 10: {
      NBT_Components components;
      while (true) {
        std::shared_ptr<NBT_Component> component = readAnyTag(buf);
        if (component->getType() == Type_TAG_End)
          return std::make_shared<TAG_Compound>(components);
        components.push_back(component);
      }
    }

    case 11: {
      int length = buf.readInt();
      std::vector<int> ints;
      ints.resize(length);
      for (int i = 0; i < length; i++) ints[i] = buf.readInt();
      return std::make_shared<TAG_Int_Array>(ints.size(), ints.data());
    }

    case 12: {
      int length = buf.readInt();
      std::vector<int64_t> longs;
      longs.resize(length);
      for (int i = 0; i < length; i++) longs[i] = buf.readLong();
      return std::make_shared<TAG_Long_Array>(longs.size(), longs.data());
    }

    default: {
      return nullptr;
    }
  }
}

std::shared_ptr<NBT_Component> read_uncompressed(ByteBuffer& buf) {
  int type = buf.readByte();
  if (type == 0)
    return std::make_shared<TAG_End>();
  std::string name = read_name(buf);
  std::shared_ptr<NBT_Component> component = read_raw_data(buf, type);
  component->name = name;
  return component;
}

static void init_decompressor() {
  if (!decompressor) {
    decompressor = libdeflate_alloc_decompressor();
  }
}

std::shared_ptr<NBT_Component> read_gzipped(ByteBuffer& buf) {
  init_decompressor();

  size_t slen = buf.length();
  size_t dlen = buf.length() * 2;
  while (true) {
    auto* rbuf = (byte_t*) malloc(dlen);
    libdeflate_result res = libdeflate_gzip_decompress(decompressor, buf.data.data(), slen, rbuf, dlen, &dlen);
    if (res != LIBDEFLATE_INSUFFICIENT_SPACE) {
      if (res != LIBDEFLATE_SUCCESS) {
        std::cerr << "Couldn't decompress data: " << res << std::endl;
        return {};
      }

      ByteBuffer uncompressed(rbuf, dlen);
      free(rbuf);
      return read_uncompressed(uncompressed);
    }
    free(rbuf);
    dlen *= 2;
  }
}

std::shared_ptr<NBT_Component> read_zlib(ByteBuffer& buf) {
  init_decompressor();

  size_t slen = buf.length();
  size_t dlen = buf.length() * 2;
  while (true) {
    auto* rbuf = (byte_t*) malloc(dlen);
    libdeflate_result res = libdeflate_zlib_decompress(decompressor, buf.data.data(), slen, rbuf, dlen, &dlen);
    if (res != LIBDEFLATE_INSUFFICIENT_SPACE) {
      if (res != LIBDEFLATE_SUCCESS) {
        std::cerr << "Couldn't decompress data: " << res << std::endl;
        return {};
      }

      ByteBuffer uncompressed(rbuf, dlen);
      free(rbuf);
      return read_uncompressed(uncompressed);
    }
    free(rbuf);
    dlen *= 2;
  }
}

// TODO: json -> nbt impl

} // namespace NBTIO
