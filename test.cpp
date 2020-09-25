#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

/*
int RemoveTwos(int original){
	while (original % 2 != 1)
    	{
        	original = original % 2;
    	}

}
*/
TEST_CASE("Remove Twos check", "[removed]")
{
    REQUIRE(RemoveTwos(7) == 7);
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
