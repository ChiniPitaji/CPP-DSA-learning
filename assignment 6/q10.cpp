// print butterfly pattern:
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *


#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=4;
    //upper half pattern
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <=2*(n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}
