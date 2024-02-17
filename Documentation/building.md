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
