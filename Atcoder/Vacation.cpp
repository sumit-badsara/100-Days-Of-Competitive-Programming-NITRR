#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll n,maxx=0,maxx2=0,max_prev=-1,max2_prev=-1,max_now,max2_now,temp,flag=-1;
    ll arr[4];
    cin>>n;

    vector <ll> DP(3,0);

    for(int i=0;i<n;i++)
    {
        vector <ll> NEW_DP(3,0);
        cin>>arr[0]>>arr[1]>>arr[2];

        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(j!=k)
                    NEW_DP[k] = max(NEW_DP[k], DP[j]+arr[k]);
            }
        }
        DP = NEW_DP;
    }
    cout<<max({DP[0],DP[1],DP[2]});
    return 0;
}