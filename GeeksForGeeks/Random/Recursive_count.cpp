#include<bits/stdc++.h>

using namespace std;

void printRecursion(int m,int n)
{
    cout<<m<<" ";

    if(m==n)
        return;
    
    if(m<n)
        printRecursion(m+1,n);
    else
        printRecursion(m-1,n);
}

int main()
{
    int m=3,n=5;
    printRecursion(m,n);

    return 0;
}