// Print the 0-1 Triangle Pattern. For n=5
// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1 



#include <iostream>
using namespace std;
int main(){
// 0-1 Triangle Pattern 
bool val = true; 
int n = 5;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        cout << val << " ";
        val = !val;
    }
    cout << "\n";
}
return 0;
}