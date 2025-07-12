// Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.
// An Armstrong number is a number that is equal to the sum of cubes of its digits.

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 371;
    int num = n;
    int cubeSum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        cubeSum += lastDig * lastDig * lastDig;
        num /= 10;
    }
    if (n == cubeSum)
    {
        cout << "Armstrong number\n";
    }
    else
    {
        cout << "NOT an Armstrong number\n";
    }
    return 0;
}
