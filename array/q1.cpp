// To find largest and smallest value in a array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            // cout << "Assiging val " << arr[i] << " to max\n"; //good practice to dry and understanding of the code
        }
        if (arr[i] < min)
        {
            min = arr[i];
            // cout << "Assiging val " << arr[i] << " to min\n"; //good practice to dry and understanding of the code
        }
    }

    cout << "largest = " << max << endl;
    cout << "smallest = " << min << endl;
    return 0;
}
