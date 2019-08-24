/*
    Platform : HackerEarth
    Problem URL : https://www.hackerrank.com/challenges/dynamic-array
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int lastAnswer=0,t,x,y,q,n,temp;
    cin>>n>>q;
    
    vector <vector<int>> seq(n);

    for(int i=0;i<q;i++)
    {
        cin>>t>>x>>y;
        temp = (x^lastAnswer)%n;
        
        if(t==1)
            seq.at(temp).push_back(y);
        else
        {
            lastAnswer = y%seq.at(temp).size();
            lastAnswer = seq.at(temp).at(lastAnswer);
            cout<<lastAnswer<<"\n";
        }   
    }
    
    return 0;
}