#ifndef MYCELIUM_BITSTORAGE_H
#define MYCELIUM_BITSTORAGE_H

#include <vector>
#include "ByteBuffer.h"

class BitStorage {
private:
    const long MAGIC_VALUES[192] = {
            -1, -1, 0, -2147483648, 0, 0, 1431655765, 1431655765, 0, -2147483648,
            0, 1, 858993459, 858993459, 0, 715827882, 715827882, 0, 613566756, 613566756,
            0, -2147483648, 0, 2, 477218588, 477218588, 0, 429496729, 429496729, 0,
            390451572, 390451572, 0, 357913941, 357913941, 0, 330382099, 330382099, 0, 306783378,
            306783378, 0, 286331153, 286331153, 0, -2147483648, 0, 3, 252645135, 252645135,
            0, 238609294, 238609294, 0, 226050910, 226050910, 0, 214748364, 214748364, 0,
            204522252, 204522252, 0, 195225786, 195225786, 0, 186737708, 186737708, 0, 178956970,
            178956970, 0, 171798691, 171798691, 0, 165191049, 165191049, 0, 159072862, 159072862,
            0, 153391689, 153391689, 0, 148102320, 148102320, 0, 143165576, 143165576, 0,
            138547332, 138547332, 0, -2147483648, 0, 4, 130150524, 130150524, 0, 126322567,
            126322567, 0, 122713351, 122713351, 0, 119304647, 119304647, 0, 116080197, 116080197,
            0, 113025455, 113025455, 0, 110127366, 110127366, 0, 107374182, 107374182, 0,
            104755299, 104755299, 0, 102261126, 102261126, 0, 99882960, 99882960, 0, 97612893,
            97612893, 0, 95443717, 95443717, 0, 93368854, 93368854, 0, 91382282, 91382282,
            0, 89478485, 89478485, 0, 87652393, 87652393, 0, 85899345, 85899345, 0,
            84215045, 84215045, 0, 82595524, 82595524, 0, 81037118, 81037118, 0, 79536431,
            79536431, 0, 78090314, 78090314, 0, 76695844, 76695844, 0, 75350303, 75350303,
            0, 74051160, 74051160, 0, 72796055, 72796055, 0, 71582788, 71582788, 0,
            70409299, 70409299, 0, 69273666, 69273666, 0, 68174084, 68174084, 0, -2147483648,
            0, 5
    };

    std::vector<long long> data;
    int bits_per_entry;
    int size;

    long long max_value;
    int values_per_long;
    long long divide_multiply;
    long long divide_add;
    int divide_shift;

public:
    explicit BitStorage(int bits_per_entry, int size) : BitStorage(bits_per_entry, size, std::vector<long long>()) {}
    BitStorage(int bits_per_entry, int size, const std::vector<long long>& data) {
        this->bits_per_entry = bits_per_entry;
        this->size = size;
        this->max_value = (1L << bits_per_entry) - 1L;
        this->values_per_long = (signed char)floor(64 / bits_per_entry);
        int expectedLength = (size + values_per_long - 1) / values_per_long;
        if(!data.empty()) {
            this->data = data;
        } else this->data.resize(expectedLength);

        int magic_index = 3 * (this->values_per_long - 1);
        divide_multiply = (unsigned int) MAGIC_VALUES[magic_index];
        divide_add = (unsigned int) MAGIC_VALUES[magic_index+1];
        divide_shift = MAGIC_VALUES[magic_index + 2];
    }

    void set(int index, int value) {
        int cell_idx = cell_index(index);
        int bit_idx = bit_index(index, cell_idx);
        data[cell_idx] = data[cell_idx] & ~(max_value << bit_idx) | ((long) value & max_value) << bit_idx;
    }

    int get(int index) {
        int cell_idx = cell_index(index);
        int bit_idx = bit_index(index, cell_idx);
        return (int) (data[cell_idx] >> bit_idx & max_value);
    }

    void write(ByteBuffer& buf) {
        buf.writeVarInt((int)data.size());
        for(long long i : data) buf.writeUnsignedLong(i);
    }

    [[nodiscard]] int get_bits_per_entry() const {
        return bits_per_entry;
    }

    int get_data_length() {
        return (int)(sizeofVarInt((int)data.size()) + data.size() * 8);
    }

    std::vector<long long> get_data() {
        return data;
    }

    BitStorage copy() {
        BitStorage bs(bits_per_entry, size);
        for(long long ll : data) bs.data.push_back(ll);
        return bs;
    }

private:
    [[nodiscard]] int cell_index(int index) const {
        return (int)((index * divide_multiply + divide_add) >> 32 >> divide_shift);
    }

    [[nodiscard]] int bit_index(int index, int cell_index) const {
        return (index - cell_index * values_per_long) * bits_per_entry;
    }

};

#endif //MYCELIUM_BITSTORAGE_H
