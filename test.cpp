#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

/*
int Sign(int num)
{
    if (num < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
*/
TEST_CASE("CHECK TO SEE IF POSITIVE OR NOT", "[positive]")
{
    REQUIRE(Sign(1) == 1);
    REQUIRE(Sign(-1) == -1);
    REQUIRE(Sign(5) == 1);
    REQUIRE(Sign(-2) == -1);
    REQUIRE(Sign(9) == 1);
}

/*
double Product(std::vector<double> nums)
{
    float product = 0;
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        product = product * i;
    }
    return product;
}
*/

TEST_CASE("PRODUCT OF VECTOR", "[product]")
{
    std::vector<double> v{2.0, 1.0, 5.0, 6.0};
    REQUIRE(Product(v) == 60.0);
}
