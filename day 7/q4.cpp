// WAF to print if a number is prime or not

#include <iostream>
using namespace std;

bool isPrime(int n)
{ // prime => true, not prime => false
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0) // non-prime
        {
            return false;
        }
    }
    return true;
}

bool isPrime2(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    cout << isPrime(22) << endl;
    cout << isPrime2(23) << endl;
    return 0;
}
