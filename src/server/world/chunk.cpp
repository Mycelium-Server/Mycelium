#include "chunk.h"

Chunk::Chunk(int x, int z)
    : Chunk(ChunkLocation {x, z}) {}

Chunk::Chunk(const ChunkLocation& location)
    : location(location) {
  sections = new ChunkSection*[24];
  for (int i = 0; i < 24; i++) {
    sections[i] = new ChunkSection();
  }
}

Chunk::~Chunk() {
  for (int i = 0; i < 24; i++) {
    delete sections[i];
  }
  delete sections;
}

void Chunk::setBlock(int lx, int y, int lz, int id) const {
  getSectionByY(y)->setBlock(lx, (y + 64) % 16, lz, id);
}

int Chunk::getBlock(int lx, int y, int lz) const {
  return getSectionByY(y)->getBlock(lx, (y + 64) % 16, lz);
}

ChunkSection* Chunk::getSectionByY(int y) const {
  double corrected = y + 64;
  return sections[(int) std::floor(corrected / 16.0)];
}

int Chunk::getAbsoluteX(int local) const {
  return location.x * 16 + local;
}

int Chunk::getAbsoluteZ(int local) const {
  return location.z * 16 + local;
}

Heightmap* Chunk::createHeightmap() const {
  auto* heightmap = new Heightmap();
  for (int z = 0; z < 16; z++) {
    for (int x = 0; x < 16; x++) {
      int maxY = 0;
      for (int y = 0; y < 24; y++) {
        ChunkSection* section = sections[y];
        int offset = y * 16;
        for (int ly = 0; ly < 16; ly++) {
          if (section->getBlock(x, ly, z) != 0) {
            maxY = offset + ly;
          }
        }
      }
      heightmap->set((short) (maxY + 1));
      heightmap->next();
    }
  }
  return heightmap;
}

void Chunk::write(ByteBuffer& out) const {
  out.writeInt(location.x);
  out.writeInt(location.z);

  Heightmap* heightmap = createHeightmap();
  heightmap->write(out);// TODO: Cache
  delete heightmap;

  ByteBuffer data;// TODO: Cache
  for (int i = 0; i < 24; i++) {
    sections[i]->write(data);
  }
  out.writeVarInt((int) data.readableBytes());
  out.writeBytes(data);
  out.writeVarInt(0);// TODO: Block entities ?
  out.writeByte(1);  // Trust edges ?
  out.writeByte(0);  // TODO: Light ?
  out.writeByte(0);
  out.writeByte(0);
  out.writeByte(0);
  out.writeVarInt(0);
  out.writeVarInt(0);
}
