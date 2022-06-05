#ifndef MYCELIUM_UDP_SERVER_H
#define MYCELIUM_UDP_SERVER_H

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <uv.h>
#include <thread>
#include "../ByteBuffer.h"

#define ASSERT(r, msg) if(r < 0) { fprintf(stderr, "%s: %s\n", msg, uv_strerror(r)); }

void udp_handle_packet(uv_udp_t*, ByteBuffer&);

uv_udp_t udp_;

void udp_receive(uv_udp_t* handle, ssize_t nread, const uv_buf_t* rcvbuf,
                 const struct sockaddr* addr, unsigned flags) {
    if(nread > 0) {
        ByteBuffer base((byte_t*)rcvbuf->base, nread);
        udp_handle_packet(handle, base);
    }
    free(rcvbuf->base);
}

void udp_alloc(uv_handle_t* handle, size_t ssize, uv_buf_t* buf) {
    buf->base = (char*)malloc(ssize);
    buf->len = ssize;
}

void udp_start() {
    int status;
    struct sockaddr_in addr;

    status = uv_udp_init(uv_default_loop(), &udp_);
    ASSERT(status, "init")

    uv_ip4_addr("0.0.0.0", 19132, &addr);

    status = uv_udp_bind(&udp_, (const struct sockaddr*)&addr, 0);
    ASSERT(status, "bind")

    status = uv_udp_recv_start(&udp_, udp_alloc, udp_receive);
    ASSERT(status, "recv")

    uv_run(uv_default_loop(), UV_RUN_DEFAULT);
}

void udp_start_thread() {
    printf("String UDP server...\n");
    std::thread(udp_start).detach();
}

#endif //MYCELIUM_UDP_SERVER_H
