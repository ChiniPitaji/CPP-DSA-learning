// Question 2 : WAP to print the multiplication table of a number, entered by the user.

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout << (n * i)  << " " ;
    }
    cout << endl;
    return 0;
}
