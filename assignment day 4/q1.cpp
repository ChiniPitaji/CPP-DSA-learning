// Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "number is positive.\n";
    }
    else if (num < 0)
    {
        cout << "number is negative.\n";
    }
    else
    {
        cout << "number is zero.\n";
    }
    return 0;
}