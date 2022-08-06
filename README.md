[Old version](https://github.com/JNNGL/Mycelium/tree/old) | [Stable branch](https://github.com/JNNGL/Mycelium/tree/stable)

### Building

1. Compile Mycelium <pre><code>$ git clone https://github.com/JNNGL/Mycelium
$ mkdir Mycelium/build
$ cd Mycelium/build
$ cmake ..
$ cmake --build .
</code></pre>
  
  <b>Requirements:</b>
- CMake (>= 3.20)
- C compiler
- C++17 compiler
- Python 3
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
 - [rapidyaml](https://github.com/biojppm/rapidyaml)