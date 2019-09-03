#include<bits/stdc++.h>

using namespace std;

void printSpiral(int arr[4][4], int r, int c)
{
    // k - initial row
    // r - final row
    // l - initial column
    // c - finall column

    int k = 0, l = 0;

    while(k < r && l < c)
    {
        //Left to Right
        for(int i=l;i<c;i++)
            cout<<arr[k][i]<<" ";
        k++;

        //Top to Bottom
        for(int i=k;i<r;i++)
            cout<<arr[i][c-1]<<" ";
        c--;

        //Right to Left
        for(int i=c-1;i>=l;i--)
            cout<<arr[r-1][i]<<" ";
        r--;

        //Bottom to Top
        for(int i=r-1;i>=k;i--)
            cout<<arr[i][l]<<" ";
        l++;
    }


}

int main()
{
    int r=4,c=4,temp;
    int arr[4][4]={
        {1,   2,  3,  4},
        {5,   6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    printSpiral(arr, r, c);

    return 0;
}