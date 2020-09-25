#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

/*
int Sign(int num)
{
	return num*-1;
}
*/
TEST_CASE("Sign Check", "[sign]")
{
    REQUIRE(Sign(7) == -7);
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
    std::vector<double> v{4.0, 1.0, 5.0, 6.0};
    REQUIRE(Product(v) == 120.0);
}
