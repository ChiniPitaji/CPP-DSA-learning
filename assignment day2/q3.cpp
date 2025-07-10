// Question 3 : Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T) Output : (P*R*T) / 100

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int P,R,T;
    cin>>P;
    cin>> R;
    cin>>T;

    cout<<"Simple Interest is:"<<(P*R*T)/100<<endl;

    return 0;
}
