#include<bits/stdc++.h>
using namespace std;
#define ll    unsigned long long
#define lg   long long
#define fi(i,L,R) for (int i = L ; i <= R ; i++)
#define fd(i,R,L) for (int i = R ; i >= L ; i--)
#define s1   string
#define p_b  push_back
#define st   sort(a,a+n)
#define rev  reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())



int main( )
{
    ll  t; cin>>t;
    while(t--)
    {
        ll i,n,c=0;
        cin>>n;
        s1 s;
        cin>>s;
        srt(s);
        suni;
        if(s.size()==n)
        {
            cout<<n*2<<endl;
        }
        else
        {
            cout<<(n*2)-(n-s.size())<<endl;
        }


    }

   return 0;
}