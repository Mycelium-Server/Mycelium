#include "server.h"
#include <vector>

fn_init_pipeline server_initCallback;

std::vector<uv_stream_t*> tcp_streams;
std::vector<ConnectionContext*> tcp_connections;

void tcp_close(uv_handle_t* handle) {
    free(handle);
}

void tcp_shutdown(uv_shutdown_t* req, int status) {
    ConnectionContext* ctx = tcp_connections.at(std::distance(tcp_streams.begin(), std::find(tcp_streams.begin(), tcp_streams.end(), req->handle)));
    ctx->pipeline->forEach([=](AbstractHandler* handler, int) {
        if (handler->isInboundHandler()) {
            return ((InboundHandler*)handler)->onDisconnect(ctx);
        }
        return true;
    });
    tcp_connections.erase(std::find(tcp_connections.begin(), tcp_connections.end(), ctx));
    tcp_streams.erase(std::find(tcp_streams.begin(), tcp_streams.end(), ctx->stream));
    delete ctx;
    uv_close((uv_handle_t*)req->handle, tcp_close);
}

void tcp_server_read(uv_stream_t* handle, ssize_t nread, const uv_buf_t* buf) {
    if (nread == 0) return;

    if (nread < 0) {
        uv_shutdown_t* req = (uv_shutdown_t*)malloc(sizeof(*req));
        if (!req) return;

        uv_shutdown(req, handle, tcp_shutdown);
        return;
    }
}

void tcp_alloc_cb(uv_handle_t*, size_t suggested_size, uv_buf_t* buf) {
    buf->base = (char*)malloc(suggested_size);
    if(!buf->base) return;
    buf->len = suggested_size;
}

void tcp_server_on_connect(uv_stream_t* handle, int status) {
    uv_tcp_t* stream;
    int r;

    if (status != 0) return;

    stream = (uv_tcp_t*)malloc(sizeof(uv_tcp_t));
    if (!stream) return;

    r = uv_tcp_init(uv_default_loop(), stream);
    if (r != 0) return;

    stream->data = handle;

    r = uv_accept(handle, (uv_stream_t*) stream);
    if (r != 0) return;

    ConnectionContext* ctx = new ConnectionContext(nullptr, (uv_stream_t*) stream);
    ctx->pipeline = server_initCallback(ctx);
    tcp_connections.push_back(ctx);
    tcp_streams.push_back(ctx->stream);

    r = uv_read_start((uv_stream_t*) stream, tcp_alloc_cb, tcp_server_read);
    if (r != 0) return;
}

void tcp_start_server(fn_init_pipeline initCallback, const char* host, int port) {
    server_initCallback = initCallback;

    uv_tcp_t* tcp_server;
    struct sockaddr_in addr{};
    int r;

    r = uv_ip4_addr(host, port, &addr);
    if (r != 0) return;

    tcp_server = (uv_tcp_t*)malloc(sizeof(*tcp_server));
    if (!tcp_server) return;

    r = uv_tcp_init(uv_default_loop(), tcp_server);
    if (r != 0) return;

    r = uv_tcp_bind(tcp_server, (const struct sockaddr*)&addr, 0);
    if (r != 0) return;

    r = uv_listen((uv_stream_t*)tcp_server, SOMAXCONN, tcp_server_on_connect);
    if (r != 0) return;

    r = uv_run(uv_default_loop(), UV_RUN_DEFAULT);
    if (r != 0) return;
}