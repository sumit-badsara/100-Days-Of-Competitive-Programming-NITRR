#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {2,2,4,4,5,6,6,6,8}, n=9, curr=0, size=1;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            curr++;
            arr[curr] = arr[i];
            size++;
        }
    }
    n = size;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}