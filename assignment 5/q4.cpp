// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N = 15;
    for (int i = 2; i <= N; i++)
    {
        int curr = i; // current number to check for 
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (curr % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << curr << " ";
        }
    }
    cout << endl;
    return 0;
}
