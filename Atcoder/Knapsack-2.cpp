#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll knapsack(vector <ll> weight, vector <ll> value, ll w, ll n,ll max_weight)
{
    ll knapsackDP[n+1][max_weight+1];

    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=w;j++)
        {
            if(i==0 || j==0)
                knapsackDP[i][j] = 0;
            else if(weight[i-1] <= j)
                knapsackDP[i][j] = max(knapsackDP[i-1][j], knapsackDP[i-1][j-weight[i-1]]+value[i-1]);
            else
                knapsackDP[i][j] = knapsackDP[i-1][j];
        }
    }

    return knapsackDP[n][w];
}

int main()
{
    ll n,max_weight=-1,w,solution;
    cin>>n>>w;
    
    vector <ll> weight(n);
    vector <ll> value(n);

    for(int i=0;i<n;i++)
    {
        cin>>weight.at(i);
        cin>>value.at(i);
        if(weight.at(i)>max_weight)
            max_weight = weight.at(i); 
    }

    solution = knapsack(weight, value, w, n, max_weight);

    cout<<solution<<"\n";

    return 0;
}