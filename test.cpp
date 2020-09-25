#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

std::vector<int> v{1,2,3,4};

TEST_CASE ( "Sum are computed", "[sum]") {
  REQUIRE( Sum(v) == 10 );
}

TEST_CASE ( "Product are computed", "[product]") {
    REQUIRE( Product(v) == 24 );
}

TEST_CASE ( "Twos are removed", "[product]") {
    REQUIRE( RemoveTwos(7) == 7 );
}
