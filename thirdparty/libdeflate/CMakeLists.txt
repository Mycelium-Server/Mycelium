cmake_minimum_required(VERSION 3.5.1)
include(CheckCCompilerFlag)

project(libdeflate
        LANGUAGES C ASM
        VERSION 1.9
        )

set(CMAKE_C_STANDARD 99)

# libdeflate options
option(LIBDEFLATE_DECOMPRESSION_ONLY "Omit all compression code, building a decompression-only library" OFF)
option(LIBDEFLATE_DISABLE_ZLIB "disable support for the zlib wrapper format" OFF)
option(LIBDEFLATE_DISABLE_GZIP "disable support for the gzip wrapper format" OFF)
option(LIBDEFLATE_FREESTANDING "build a freestanding library, i.e. a library that doesn't
                                link to any libc functions like malloc(), free(),
                                and memcpy(). All users will need to call
                                libdeflate_set_memory_allocator()." OFF)
option(LIBDEFLATE_BUILD_UTILITY "Build gzip program" OFF)
option(LIBDEFLATE_BUILD_TESTS "Build tests" OFF)
option(LIBDEFLATE_TEST_SUPPORT__DO_NOT_USE "Don't use this option except for testing; it isn't a stable interface." OFF)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

if(LIBDEFLATE_BUILD_TESTS)
    enable_testing()
endif()

# Source code
set(LIBDEFLATE_SOURCES
        lib/deflate_decompress.c
        lib/utils.c
        lib/x86/cpu_features.c
        lib/zlib_compress.c
        lib/arm/cpu_features.c
        )

if (NOT LIBDEFLATE_DECOMPRESSION_ONLY)
    list(APPEND LIBDEFLATE_SOURCES lib/deflate_compress.c)
endif()

if (NOT LIBDEFLATE_DISABLE_ZLIB)
    list(APPEND LIBDEFLATE_SOURCES lib/adler32.c lib/zlib_decompress.c)
    if (NOT LIBDEFLATE_DECOMPRESSION_ONLY)
        list(APPEND LIBDEFLATE_SOURCES lib/zlib_compress.c)
    endif()
endif()

if (NOT LIBDEFLATE_DISABLE_GZIP)
    list(APPEND LIBDEFLATE_SOURCES lib/crc32.c lib/gzip_decompress.c)
    if (NOT LIBDEFLATE_DECOMPRESSION_ONLY)
        list(APPEND LIBDEFLATE_SOURCES lib/gzip_compress.c)
    endif()
endif()

add_library(libdeflate)
add_library(libdeflate::libdeflate ALIAS libdeflate)

set_target_properties(libdeflate PROPERTIES SOVERSION 0)
if(WIN32 AND NOT BUILD_SHARED_LIBS)
    set(LIBDEFLATE_OUTPUT_NAME deflatestatic)
else()
    set(LIBDEFLATE_OUTPUT_NAME deflate)
endif()
set_target_properties(libdeflate PROPERTIES OUTPUT_NAME ${LIBDEFLATE_OUTPUT_NAME})

target_sources(libdeflate PRIVATE ${LIBDEFLATE_SOURCES})

# Compile options
check_c_compiler_flag(-Wall DEFLATE_LINT_WALL)
check_c_compiler_flag(-Wundef DEFLATE_LINT_WUNDEF)
check_c_compiler_flag(-Wpedantic DEFLATE_LINT_PEDANTIC)
check_c_compiler_flag(-Wdeclaration-after-statement DEFLATE_LINT_DECLARATION_AFTER_STATEMENT)
check_c_compiler_flag(-Wmissing-prototypes DEFLATE_LINT_MISSING_PROTOTYPES)
check_c_compiler_flag(-Wstrict-prototypes DEFLATE_LINT_STRICT_PROTOTYPES)
check_c_compiler_flag(-Wvla DEFLATE_LINT_VLA)
check_c_compiler_flag(-Wimplicit-fallthrough DEFLATE_LINT_IMPLICIT_FALLTHROUGH)

target_compile_options(libdeflate
        PRIVATE
        $<$<BOOL:${DEFLATE_LINT_WALL}>:-Wall>
        $<$<BOOL:${DEFLATE_LINT_UNDEF}>:-Wundef>
        $<$<BOOL:${DEFLATE_LINT_PEDANTIC}>:-Wpedantic>
        $<$<BOOL:${DEFLATE_LINT_DECLARATION_AFTER_STATEMENT}>:-Wdeclaration-after-statement>
        $<$<BOOL:${DEFLATE_LINT_MISSING_PROTOTYPES}>:-Wmissing-prototypes>
        $<$<BOOL:${DEFLATE_LINT_STRICT_PROTOTYPES}>:-Wstrict-prototypes>
        $<$<BOOL:${DEFLATE_LINT_VLA}>:-Wvla>
        $<$<BOOL:${DEFLATE_LINT_IMPLICIT_FALLTHROUGH}>:-Wimplicit-fallthrough>
        )
if(NOT MSVC)
    target_compile_definitions(libdeflate PRIVATE _ANSI_SOURCE)
endif()

if (BUILD_SHARED_LIBS)
    target_compile_definitions(libdeflate PUBLIC LIBDEFLATE_DLL)
    set_target_properties(libdeflate PROPERTIES C_VISIBILITY_PRESET hidden)
endif()

if (FREESTANDING)
    target_compile_definitions(libdeflate PRIVATE FREESTANDING)
    target_compile_options(libdeflate PRIVATE -ffreestanding -nostdlib)
endif()

if (LIBDEFLATE_TEST_SUPPORT__DO_NOT_USE)
    target_compile_definitions(libdeflate PRIVATE TEST_SUPPORT__DO_NOT_USE)
endif()

target_include_directories(libdeflate PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>
        )

set_target_properties(libdeflate PROPERTIES PUBLIC_HEADER "libdeflate.h")

install(TARGETS libdeflate
        EXPORT libdeflateExport
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        )

## pkgconfig file
configure_file(
        ${PROJECT_SOURCE_DIR}/cmake/libdeflate.pc.in
        libdeflate.pc
        @ONLY
)

install(
        FILES ${CMAKE_CURRENT_BINARY_DIR}/libdeflate.pc
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
)

# CMake config file
configure_package_config_file(
        ${PROJECT_SOURCE_DIR}/cmake/libdeflate-config.cmake.in
        libdeflate-config.cmake
        INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libdeflate
)

write_basic_package_version_file(
        libdeflate-config-version.cmake
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY AnyNewerVersion
)

export(
        EXPORT libdeflateExport
        NAMESPACE libdeflate::
        FILE libdeflate-targets.cmake
)

install(
        EXPORT libdeflateExport
        NAMESPACE libdeflate::
        FILE libdeflate-targets.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libdeflate
)

install(
        FILES
        ${CMAKE_CURRENT_BINARY_DIR}/libdeflate-config.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/libdeflate-config-version.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libdeflate
)

add_subdirectory(programs)