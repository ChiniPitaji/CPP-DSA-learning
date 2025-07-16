// Print all primes in a range from 2 to n.

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

void allPrimes(int n)
{
    // all primes from 2 to n
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))         //true
        {
            cout << i << " ";
        }
    }
    cout<<endl;
}

int main()
{
    allPrimes(100);
    return 0;
}
