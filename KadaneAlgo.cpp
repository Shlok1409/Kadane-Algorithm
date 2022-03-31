#include<bits/stdc++.h>
using namespace std;

long long maxSubArraySum(long long arr[],long long n)
{
    long long curr = 0,Max = 0;

    for(long long i = 0; i < n ; i++)
    {
        curr = curr + arr[i];

        if(curr < 0)
            curr = 0;

        Max = max(Max,curr);
    }

    return Max;
}

void display(long long arr[],long long n)
{
    for(long long i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    long long n;

    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<endl;

    long long arr[n];

    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n ; i++)
        cin>>arr[i];
    cout<<endl;

    cout<<"Array : ";
    display(arr,n);
    cout<<endl;

    cout<<"Maximum sub array sum in given array : "<<maxSubArraySum(arr,n)<<endl;

    return 0;
}
