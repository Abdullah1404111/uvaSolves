#include<iostream>
#include<cstdio>

#define ll long long
#define sc scanf
#define pf printf

using namespace std;

ll happy(ll n)
{
    ll s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s +=((n%10)*(n%10));
        n /= 10;
    }
    happy(s);
}



int main()
{
    int t,no=0;
    sc("%d",&t);
    while(t--)
    {
        ll n;
        sc("%lld",&n);
        if(n==7)
        {
            pf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else if(happy(n) == 1)
        {
            pf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else
        {
             pf("Case #%d: %lld is an Unhappy number.\n",++no,n);
        }

    }
    return 0;
}
