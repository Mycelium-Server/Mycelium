#ifndef MYCELIUM_DER_H
#define MYCELIUM_DER_H

#include "ByteBuffer.h"

byte_t* pack(byte_t* in, int ioffset, int ilength, int iw, int ow, int* p_length) {
    if(iw == ow) {
        p_length[0] = ilength;
        return in;
    }

    int bits = ilength * iw;
    p_length[0] = (bits + ow - 1) / ow;
    byte_t* out = (byte_t*)calloc((bits + ow - 1) / ow, 1);

    int ipos = 0;

    int opos = (int)((bits + ow - 1) / ow) * ow - bits;

    while(ipos < bits) {
        int count = iw - ipos % iw;
        if (count > ow - opos % ow) {
            count = ow - opos % ow;
        }

        out[opos / ow] |= (((in[ioffset + ipos / iw]+256) >> (iw - ipos % iw - count))
                        & ((1 << (count)) - 1)) << (ow - opos % ow - count);

        ipos += count;
        opos += count;
    }
    return out;
}

int pack7_oid(byte_t* in, int ioffset, int ilength, byte_t* out, int ooffset) {
    int p_length;
    byte_t* p = pack(in, ioffset, ilength, 8, 7, &p_length);
    int first_non_zero = p_length - 1;
    for(int i = p_length - 2; i >= 0; i--) {
        if(p[i] != 0) {
            first_non_zero = i;
        }
        p[i] |= 0x80;
    }
    memcpy(out + ooffset, p + first_non_zero, p_length - first_non_zero);
    return p_length - first_non_zero;
}

int pack7_oid(int input, byte_t* out, int ooffset) {
    byte_t b[4];
    b[0] = (byte_t)(input >> 24);
    b[1] = (byte_t)(input >> 16);
    b[2] = (byte_t)(input >> 8);
    b[3] = (byte_t)(input);
    return pack7_oid(b, 0, 4, out, ooffset);
}

ByteBuffer object_identifier(const std::string& oid) {
    char ch = '.';
    int start = 0;
    int end = 0;

    int pos = 0;
    byte_t* tmp = (byte_t*)calloc(oid.size(), 1);
    int first = 0;
    int count = 0;

    std::string comp;
    do {
        int length = 0;
        end = (int)oid.find(ch, start+1);
        if(end == std::string::npos) {
            comp = oid.substr(start);
            length = (int)oid.size() - start;
        } else {
            comp = oid.substr(start, end);
            length = end - start;
        }

        if(length > 9) {
            int64_t num = std::atoll(comp.c_str());
            if(count == 0) {
                first = (int)num;
            } else {
                if(count == 1) {
                    num += 40*first;
                }
                pos += pack7_oid(num, tmp, pos);
            }
        } else {
            int num = std::atoi(comp.c_str());
            if(count == 0) {
                first = num;
            } else {
                if(count == 1) {
                    num += 40 * first;
                }
                pos += pack7_oid(num, tmp, pos);
            }
        }
        start = end + 1;
        count++;
    } while(end != -1);
    return ByteBuffer(tmp, (unsigned int)oid.size()).trim();
}

void der_write_length(ByteBuffer& buf, int len) {
    if(len < 128) {
        buf.writeByte((byte_t)len);
    } else if(len < (1 << 8)) {
        buf.writeByte((byte_t)0x081);
        buf.writeByte((byte_t)len);
    } else if(len < (1 << 16)) {
        buf.writeByte((byte_t)0x082);
        buf.writeByte((byte_t)(len >> 8));
        buf.writeByte((byte_t)len);
    } else if(len < (1 << 24)) {
        buf.writeByte((byte_t)0x083);
        buf.writeByte((byte_t)(len >> 16));
        buf.writeByte((byte_t)(len >> 8));
        buf.writeByte((byte_t)len);
    } else {
        buf.writeByte((byte_t)0x084);
        buf.writeByte((byte_t)(len >> 24));
        buf.writeByte((byte_t)(len >> 16));
        buf.writeByte((byte_t)(len >> 8));
        buf.writeByte((byte_t)len);
    }
}

int der_read_length(ByteBuffer& buf) {
    byte_t b = buf.readByte();
    if(b == 0x081) {
        return buf.readByte();
    }
    if(b == 0x082) {
        return ((int)buf.readByte() << 8) | buf.readByte();
    }
    if(b == 0x083) {
        return ((int)buf.readByte() << 16) | ((int)buf.readByte() << 8) | buf.readByte();
    }
    if(b == 0x084) {
        return ((int)buf.readByte() << 24) | ((int)buf.readByte() << 16) | ((int)buf.readByte() << 8) | buf.readByte();
    }
    return b;
}

#endif //MYCELIUM_DER_H
