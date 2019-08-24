/*
    Platform : HackerRank
    Problem URL : https://www.hackerrank.com/challenges/array-left-rotation
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,rotate;
    cin>>n>>rotate;
    int arr[n+1];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        if(rotate==n)
            rotate %= n;
        cout<<arr[rotate]<<" ";
        rotate++;
    }

    return 0;
}