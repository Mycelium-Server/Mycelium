#include "registry_codec.h"

#include <fstream>

static ByteBuffer* registry_codec = nullptr;

ByteBuffer* default_registry_codec() {
    if (!registry_codec) {
        std::ifstream file("registry_codec.nbt", std::ios_base::binary);

        file.seekg(0, std::ios_base::end);
        size_t length = file.tellg();
        file.seekg(0, std::ios_base::beg);

        std::vector<unsigned char> data;
        data.reserve(length);
        std::copy(std::istreambuf_iterator<char>(file),
                std::istreambuf_iterator<char>(),
                std::back_inserter(data));
        registry_codec = new ByteBuffer(data);
    }

    return registry_codec;
}