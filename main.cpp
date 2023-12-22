#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
long long fact(long long r)
{
    long long re = 1;
    while(r)
    {
        re*=r;
        r--;
    }
    return re;

}
long long ncr(long long n, long long r)
{

    if(!(n&&r)|| (n==r))
    {
        return 1;
    }
    if(n-r>r)
    {

        long long temp  = n-1;
        long long temp2 = r;

        while(r-1)
        {
            n*=temp;
            temp--;
            r--;
        }
        return n/fact(temp2);
    }
    else
    {

    long long temp  = n-1;
    long long temp2 = n-r;
    long long n2 = n;

        while(temp2-1)
        {
            n*=temp;
            temp--;
            temp2--;
        }
        return n/fact(n2-r);
    }


}
int main()
{

    while(1)
    {
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        cout<<" ";
        for(int k = 0;k<=i;k++)
        {
            cout<<ncr(i,k)<<" ";
        }
        cout<<endl;

    }
    }

    return 0;
}
