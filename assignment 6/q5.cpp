// print character pyramid pattern:
// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch<<" ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
