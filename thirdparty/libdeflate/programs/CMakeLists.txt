if(LIBDEFLATE_BUILD_UTILITY OR LIBDEFLATE_BUILD_TESTS)
    include(CheckSymbolExists)

    check_symbol_exists(clock_gettime "time.h" HAVE_CLOCK_GETTIME)
    check_symbol_exists(futimens "fcntl.h;sys/stat.h" HAVE_FUTIMENS)
    check_symbol_exists(futimes "sys/time.h" HAVE_FUTIMES)
    check_symbol_exists(posix_fadvise "fcntl.h" HAVE_POSIX_FADVISE)
    check_symbol_exists(posix_madvise "sys/mman.h" HAVE_POSIX_MADVISE)

    check_c_source_compiles("#include <sys/types.h>
                           #include <sys/stat.h>
                           int main() { struct stat st; (void) st.atim; }"
            HAVE_STAT_NANOSECOND_PRECISION)

    check_c_source_compiles("#include <sys/types.h>
                          #include <sys/stat.h>
                          int main() { struct stat st; (void) st.st_atimespec; }"
            HAVE_STAT_NANOSECOND_PRECISION_MACOS)

    if (${HAVE_STAT_NANOSECOND_PRECISION_MACOS})
        set(HAVE_STAT_NANOSECOND_PRECISION 1)
        set(st_atim st_atimensec)
        set(st_mtim st_mtimensec)
        set(st_ctim st_ctimensec)
    endif()

    configure_file(${PROJECT_SOURCE_DIR}/programs/config.h.in
            ${PROJECT_SOURCE_DIR}/programs/config.h)

    # Small library for common code
    add_library(libdeflate_programs_common STATIC prog_util.c tgetopt.c)
    target_compile_definitions(libdeflate_programs_common PUBLIC HAVE_CONFIG_H)
    if(NOT MSVC)
        target_compile_definitions(libdeflate_programs_common PUBLIC _POSIX_C_SOURCE=200809L _FILE_OFFSET_BITS=64)
    endif()
    target_link_libraries(libdeflate_programs_common PUBLIC libdeflate)

    # cli
    if(LIBDEFLATE_BUILD_UTILITY)
        add_executable(libdeflate-gzip gzip.c)
        target_link_libraries(libdeflate-gzip PRIVATE libdeflate_programs_common)

        install(TARGETS libdeflate-gzip DESTINATION ${CMAKE_INSTALL_BINDIR})
    endif()

    # tests
    if(LIBDEFLATE_BUILD_TESTS)
        find_package(ZLIB REQUIRED)

        add_library(libdeflate_tests_common STATIC test_util.c)
        target_link_libraries(libdeflate_tests_common PUBLIC libdeflate_programs_common ZLIB::ZLIB)

        set(TEST_TARGET_NAMES
                test_checksums
                test_custom_malloc
                test_incomplete_codes
                test_litrunlen_overflow
                test_overread
                test_slow_decompression
                test_trailing_bytes
                )
        foreach(TEST_TARGET_NAME ${TEST_TARGET_NAMES})
            add_executable(${TEST_TARGET_NAME} ${TEST_TARGET_NAME}.c)
            target_link_libraries(${TEST_TARGET_NAME} PRIVATE libdeflate_tests_common)

            add_test(NAME ${TEST_TARGET_NAME} COMMAND ${TEST_TARGET_NAME})
        endforeach()

        add_executable(benchmark benchmark.c)
        target_link_libraries(benchmark PRIVATE libdeflate_tests_common)

        add_executable(checksum checksum.c)
        target_link_libraries(checksum PRIVATE libdeflate_tests_common)
    endif()
endif()