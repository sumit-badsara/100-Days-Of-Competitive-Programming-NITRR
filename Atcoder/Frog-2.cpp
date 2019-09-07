#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll INF = 10e9 + 7;

int main()
{
    long n,k;
    cin>>n>>k;

    vector <ll> dp(n+1,INF);
    vector <ll> arr(n+1);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];

    dp[0] = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=i+k;j++)
        {
            if(j<n)
                dp[j] = min(dp[j],abs(arr[j]-arr[i]) + dp[i]);
        }
    }

    cout<<dp[n-1];

    return 0;
}