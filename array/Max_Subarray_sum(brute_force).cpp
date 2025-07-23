#include <iostream>
using namespace std;

void maxSubarraySum1(int *arr ,int n){
    int maxSum=INT_MIN;
    int minSum= INT_MAX;
    for (int  start = 0; start < n; start++)
    {
        for (int  end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum=max(maxSum,currSum);
            minSum=min(minSum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum= "<<maxSum<<endl;
    cout<<"minimum subarray sum= "<<minSum<<endl;

}

int main()
{
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxSubarraySum1(arr,n);
    return 0;
}
