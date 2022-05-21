#ifndef MYCELIUM_SERVER_H
#define MYCELIUM_SERVER_H

#include <cstdio>
#include <cstdlib>
#include <uv.h>
#include <cassert>
#include "ByteBuffer.h"

void handlePacket(uv_stream_t* handle, ByteBuffer buf);

typedef struct {
    uv_write_t req;
    uv_buf_t buf;
} write_req_t;

static uint64_t data_cntr = 0;

void on_close(uv_handle_t* handle) {
    free(handle);
}

void post_write(uv_write_t* req, int status) {

    if (status == 0)
        return;

    fprintf(stderr, "uv_write error: %s\n", uv_strerror(status));

    if (status == UV_ECANCELED)
        return;

    assert(status == UV_EPIPE);
    uv_close((uv_handle_t*)req->handle, on_close);
}

void post_shutdown(uv_shutdown_t* req, int status) {
    if(status < 0) {
        fprintf(stderr, "post_shutdown: %s\n", uv_strerror(status));
    }
    data_cntr = 0;
    uv_close((uv_handle_t*)req->handle, on_close);
}

void post_read(uv_stream_t* handle, ssize_t nread, const uv_buf_t* buf) {
    int r;
    uv_shutdown_t* req;

    if(nread == 0)
        return;

    if(nread < 0) {
        fprintf(stderr, "post_read: %s\n", uv_strerror(nread));

        req = (uv_shutdown_t*)malloc(sizeof(*req));
        assert(req != NULL);

        r = uv_shutdown(req, handle, post_shutdown);
        assert(r == 0);

        return;
    }

    data_cntr += nread;
    handlePacket(handle, ByteBuffer((byte_t*)buf->base, nread));
}

void write(uv_stream_t* handle, ByteBuffer buf) {
    write_req_t* wr;
    wr = (write_req_t*)malloc(sizeof(*wr));
    assert(wr != NULL);

    wr->buf = uv_buf_init((char*)buf.bytes.data(), buf.bytes.size());

    int r = uv_write(&wr->req, handle, &wr->buf, 1, post_write);
    assert(r == 0);
}

void alloc_cb(uv_handle_t* handle, size_t suggested_size, uv_buf_t* buf) {
    buf->base = (char*)malloc(suggested_size);
    assert(buf->base != NULL);
    buf->len = suggested_size;
}

void on_connection(uv_stream_t* server, int status) {
    uv_tcp_t* stream;
    int r;

    assert(status == 0);

    stream = (uv_tcp_t*)malloc(sizeof(uv_tcp_t));
    assert(stream != NULL);

    r = uv_tcp_init(uv_default_loop(), stream);
    assert(r == 0);

    stream->data = server;

    r = uv_accept(server, (uv_stream_t*)stream);
    assert(r == 0);

    r = uv_read_start((uv_stream_t*)stream, alloc_cb, post_read);
    assert(r == 0);
}

void start() {
    uv_tcp_t* tcp_server;
    struct sockaddr_in addr;
    int r;

    r = uv_ip4_addr("0.0.0.0", 25565, &addr);
    assert(r == 0);

    tcp_server = (uv_tcp_t*)malloc(sizeof(*tcp_server));
    assert(tcp_server != NULL);

    r = uv_tcp_init(uv_default_loop(), tcp_server);
    assert(r == 0);

    r = uv_tcp_bind(tcp_server, (const struct sockaddr*)&addr, 0);
    assert(r == 0);

    r = uv_listen((uv_stream_t*)tcp_server, SOMAXCONN, on_connection);
    assert(r == 0);

    r = uv_run(uv_default_loop(), UV_RUN_DEFAULT);
    assert(r == 0);
}

#endif //MYCELIUM_SERVER_H
