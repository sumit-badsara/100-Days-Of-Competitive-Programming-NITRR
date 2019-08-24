/*
    Platform : HackerRank
    Problem URL : https://www.hackerrank.com/challenges/sparse-arrays
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    
    //Map to store count of all strings
    map <string,int> freq;

    //Temporary string to take input
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        freq[str]++;
    }

    //Now answering queries in O(1) as we are using map(Hashing)
    cin>>q;

    for(int i=0;i<q;i++)
    {
        cin>>str;
        cout<<freq[str]<<"\n";
    }

    return 0;
}