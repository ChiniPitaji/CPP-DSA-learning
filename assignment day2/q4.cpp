// Question 4 : Write a program to calculate the area of a circle.
// Input : r (radius) Output : PI*r*r (area)

#include <iostream>
using namespace std;
#define Pi 3.14
int main(int argc, char const *argv[])
{
    int radius;
    cin>>radius;
    cout<<"area of circle is"<<Pi*radius*radius<<endl;
    return 0;
}
