/**************************************
*Coded By: BadduCoder (Sumit Badsara) *
***************************************/
#include<bits/stdc++.h>
using namespace std;

//All the Loops and defines required
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define ff first
#define ss second
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

//All the declarations using typedef

typedef long long int ll;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef map<int,int> MII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int l;

int main()
{
    _cin;
    
    priority_queue <double> small;
    priority_queue <double, vector <double>, greater<double>> large;

    ll n;
    double median=0,x;
    cin>>n;
    double arr[n+1];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    median=arr[0];
    cout<<median<<" ";
    small.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        x = arr[i];

        //Case when small is greater than large
        if(small.size()>large.size())
        {
            if(x<median)
            {
                large.push(small.top());
                small.pop();
                small.push(x);
            }
            else
                large.push(x);
            median = (small.top()+large.top())/2.0;
        }
        else if(small.size()==large.size())
        {
            if(x<median)
            {
                small.push(x);
                median = small.top();
            }
            else
            {
                large.push(x);
                median = large.top();
            }
        }
        else
        {
            if(x>median)
            {
                small.push(large.top());
                large.pop();
                large.push(x);
            }
            else
                small.push(x);
            median = (small.top()+large.top())/2.0;
        }
        cout<<median<<" ";
    }

    return 0;
}