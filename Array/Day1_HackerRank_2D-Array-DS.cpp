/*
    Platform : HackerEarth
    Problem URL : https://www.hackerrank.com/challenges/2d-array
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int maxSum=-1000000007,currentSum=0,n=6,arr[7][7];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            //Initialzing zero for each hourglass
            currentSum=0;
        
            //Summing up the values of hourglass
            currentSum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
            currentSum += arr[i+1][j+1];
            currentSum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
        
            //Checking if curerent sum if max
            if(currentSum>maxSum)
                maxSum = currentSum;
        }
    }

    cout<<maxSum<<"\n";

    return 0;
}