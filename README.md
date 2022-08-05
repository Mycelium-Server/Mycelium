Old version: [https://github.com/JNNGL/Mycelium/tree/old](https://github.com/JNNGL/Mycelium/tree/old)

### Building

1. Compile Mycelium <pre><code>$ git clone https://github.com/JNNGL/Mycelium
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
</code></pre>
2. Copy resources
   `(TODO: Do it automatically)`
   1. Windows:
      1. Copy `build/thirdparty/libuv/[BUILD_TYPE]/uv.dll` to `build/[BUILD_TYPE]/`
      2. Copy `registry_codec.nbt` to `build/[BUILD_TYPE]/`
   2. Linux:
      1. Copy `registry_codec.nbt` to `build/`
  
  <b>Requirements:</b>
- CMake (>= 3.20)
- C compiler
- C++17 compiler
- Linux (32-bit):
  1. libcurl

### Third-Party libraries

 - [cURL](https://github.com/curl/curl)
 - [libuv](https://github.com/libuv/libuv)
 - [OpenSSL](https://github.com/openssl/openssl)
 - [zlib](https://github.com/madler/zlib)
 - [stduuid](https://github.com/mariusbancila/stduuid)
 - [gsl](https://github.com/microsoft/GSL)
 - [nlohmann/json](https://github.com/nlohmann/json)