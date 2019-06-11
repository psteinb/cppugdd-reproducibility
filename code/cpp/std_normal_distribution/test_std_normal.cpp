#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <cmath>

TEST_CASE( "powers are computed", "[powers]" ) {
    REQUIRE( std::pow(1,2) == 1 );
    REQUIRE( std::pow(2,2) == 4 );
    REQUIRE( std::pow(3,2) == 9 );
}
