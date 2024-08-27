#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>

#include <cstdint>
#include <foo/foo.hpp>

TEST_CASE( "Foo Add", "[add]" ) {
    REQUIRE( add_u64(1, 1) == 2 );
    REQUIRE( add_u64(2, 2) == 4 );
    REQUIRE( add_u64(4, 4) == 8 );
    REQUIRE( add_u64(8, 8) == 16 );
    REQUIRE( add_u64(16, 16) == 32 );
}

TEST_CASE( "Foo Sub", "[sub]" ) {
    REQUIRE( sub_u64(1, 1) == 0 );
    REQUIRE( sub_u64(2, 2) == 0 );
    REQUIRE( sub_u64(4, 4) == 0 );
    REQUIRE( sub_u64(8, 8) == 0 );
    REQUIRE( sub_u64(16, 16) == 0 );
}
