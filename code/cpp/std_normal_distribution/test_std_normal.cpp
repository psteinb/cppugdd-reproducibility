#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <random>

TEST_CASE( "random numbers diced", "[rng]" ) {


    REQUIRE( std::pow(1,2) == 1 );
    REQUIRE( std::pow(2,2) == 4 );
    REQUIRE( std::pow(3,2) == 9 );
}
