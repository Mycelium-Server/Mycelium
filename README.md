# Mycelium

### Building

1. Requirements:
    - CMake (>= 3.20)
    - Ninja
    - C compiler (clang recommended)
    - C++17 compiler (clang++ recommended)
    - Python 3
    - OpenSSL
      - Linux: apt-get `$ sudo apt-get install openssl`
      - macOS: [Homebrew](https://brew.sh/) `$ brew install openssl` 
      - Windows: [Chocolatey](https://chocolatey.org/install) `$ choco install openssl`

2. Compile Mycelium:
   ```$ git clone https://github.com/Mycelium-Server/Mycelium
   $ mkdir Mycelium/build
   $ cd Mycelium/build
   $ cmake -G Ninja ..
   $ cmake --build .
   ```

### License

Licensed under Apache License 2.0

### Third-Party libraries

- [OpenSSL](https://github.com/openssl/openssl) ([Apache License 2.0](https://github.com/openssl/openssl/blob/master/LICENSE.txt))
- [asio](https://github.com/chriskohlhoff/asio) ([Boost Software License - Version 1.0](https://github.com/chriskohlhoff/asio/blob/master/asio/LICENSE_1_0.txt))
- [cURL](https://github.com/curl/curl) ([curl License](https://curl.se/docs/copyright.html))
- [GSL](https://github.com/microsoft/GSL) ([MIT License](https://github.com/microsoft/GSL/blob/main/LICENSE))
- [libdeflate](https://github.com/ebiggers/libdeflate) ([MIT License](https://github.com/ebiggers/libdeflate/blob/master/COPYING))
- [nlohmann/json](https://github.com/nlohmann/json) ([MIT License](https://github.com/nlohmann/json/blob/v3.11.2/LICENSE.MIT))
- [rapidyaml](https://github.com/biojppm/rapidyaml) ([MIT License](https://github.com/biojppm/rapidyaml/blob/master/LICENSE.txt))
- [stduuid](https://github.com/mariusbancila/stduuid) ([MIT License](https://github.com/mariusbancila/stduuid/blob/master/LICENSE))
- [siv::PerlinNose](https://github.com/Reputeless/PerlinNoise) ([MIT License](https://github.com/Reputeless/PerlinNoise/blob/master/LICENSE))
- Ninja ([Apache License 2.0](https://github.com/ninja-build/ninja/blob/master/COPYING))
- CMake ([New BSD License](https://github.com/Kitware/CMake/blob/master/Copyright.txt))
