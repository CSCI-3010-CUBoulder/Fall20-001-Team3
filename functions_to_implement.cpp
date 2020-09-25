#include <vector>
// divides an input integer by 2 until it is impossible to do so, then returns the final number.
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
int RemoveTwos(int original){
	while (original % 2 != 1)
    	{
        	original = original % 2;
    	}

}
// returns -1 if the number is negative and 1 if positive
int Sign(int num)
{
	return num*-1;
}

// Sums all numbers in a vector and returns the resulting value
double Sum(std::vector<double> nums)
{
	float sum = 0;
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        sum = sum * nums.at(i);
    }
    return sum;
}

// Multiplies all numbers in a vector together and returns the resulting value
double Product(std::vector<double> nums)
{
    float product = 1;
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        product = product * nums.at(i);
    }
    return product;
}
