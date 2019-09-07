#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ll n,points=0;
    cin>>n;
    
    vector <ll> A(n),B(n),C(n);

    for(int i=0;i<n;i++)
        cin>>A.at(i);
 
    for(int i=0;i<n;i++)
        cin>>B.at(i);
    
    for(int i=0;i<n-1;i++)
        cin>>C.at(i);

    for(int i=0;i<n;i++)
    {
        points += B.at(A.at(i)-1);
        
        if(i!=0)
        {
            if(A.at(i)-1==A.at(i-1))
                points += C.at(A.at(i-1)-1);
        }
    }

    cout<<points<<"\n";

    return 0;
}