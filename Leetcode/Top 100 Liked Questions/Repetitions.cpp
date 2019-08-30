#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    long max=-1,beg=0,end=0,temp;

    map <char,long> loc;

    for(int i=0;i<str.length();i++)
    {
        if(loc[str[i]]!=0)
        {
            if(beg<loc[str[i]])
                beg = loc[str[i]];
            loc[str[i]] = i+1;
        }
        else
            loc[str[i]] = i+1;

        end = i;

        if(end-beg+1>max)
            max = end-beg+1;
    }

    cout<<max<<"\n";

    return 0;
}