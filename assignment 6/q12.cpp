// Print the RhombusPattern. For n=5
//      *****
//     *****
//    *****
//   *****
//  *****

#include <iostream>
using namespace std;
int main()
{
    // Rhombus Pattern 
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
