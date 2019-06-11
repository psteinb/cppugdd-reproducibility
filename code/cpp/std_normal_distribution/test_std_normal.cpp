#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <random>

TEST_CASE( "random numbers diced", "[rng]" ) {

    //taken from https://en.cppreference.com/w/cpp/numeric/random/normal_distribution
    //std::random_device rd{};
    std::mt19937 gen{42};

    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<> d{5,2};

    REQUIRE( d(gen) == Approx(3.8995310112) );
    REQUIRE( d(gen) == Approx(6.0308661394) );
    REQUIRE( d(gen) == Approx(5.9477217113) );
    REQUIRE( d(gen) == Approx(7.7369002444) );
    REQUIRE( d(gen) == Approx(3.1663462535) );

    REQUIRE( d(gen) == Approx(4.7517056501) );
    REQUIRE( d(gen) == Approx(0.9780742507) );
    REQUIRE( d(gen) == Approx(4.0143930558) );
    REQUIRE( d(gen) == Approx(5.7851594828) );
    REQUIRE( d(gen) == Approx(3.1416306964) );


}
