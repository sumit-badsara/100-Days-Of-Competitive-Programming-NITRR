#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n,sum=0,given=0,temp;
    cin>>n;
    
    sum = n;
    sum *= (sum+1);
    sum /= 2;

    for(int i=0;i<n-1;i++)
    {
        cin>>temp;
        given += temp;
    }

    cout<<sum-given;

    return 0;
}