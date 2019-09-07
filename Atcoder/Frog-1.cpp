#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long arr[n+1],dp[n+1]={0};

    for(int i=0;i<n;i++)
        cin>>arr[i];

    dp[0] = 0;
    dp[1] = abs(arr[1]-arr[0]);

    for(int i=2;i<n;i++)
    {
        long small_jump,long_jump;
        long_jump = abs(arr[i-2]-arr[i]) + dp[i-2];
        small_jump = abs(arr[i-1]-arr[i]) + dp[i-1];

        if(long_jump>small_jump)
            dp[i] = small_jump;
        else
            dp[i] = long_jump;
    }

    cout<<dp[n-1];
    return 0;
}