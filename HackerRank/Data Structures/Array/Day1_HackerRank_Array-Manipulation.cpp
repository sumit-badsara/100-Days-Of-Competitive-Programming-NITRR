/*
    Platform : HackerRank
    Problem URL : https://www.hackerrank.com/challenges/array-manipulation
    Extra URL : https://www.geeksforgeeks.org/constant-time-range-add-operation-array/
    
    Learnt :
    Updating a multiple ranges in array in O(n) time. 
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n,q,a,b,k,temp=0,max=-1000000007;
    cin>>n>>q;
    vector <int> arr(n+1,0);

    for(int i=0;i<q;i++)
    {
        cin>>a>>b>>k;
        arr.at(a-1) += k;
        arr.at(b)   -= k;
    }

    for(int i=0;i<n;i++)
    {
        temp += arr.at(i);
        if(temp>max)
            max = temp;
    }
    cout<<max;
    return 0;
}