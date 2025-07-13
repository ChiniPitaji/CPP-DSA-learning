// print pattern:
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // outer loop
    for (int i = 1; i <= 4; i++)
    {
        // inner loop
        for (int j = 0; j <= 4; j++)
        {
            // work
            cout << i << " ";
        }
        cout << endl; // if this not added all the pattern printeed in the line
    }
    return 0;
}
