#include<bits/stdc++.h>
using namespace std;

#define  ll       long long
#define  lg        long long
#define  fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define  fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define  s1        string
#define  p_b       push_back
#define  st(n)     sort(a,a+n)
#define  rev       reverse(a,a+n)
#define  revs(j)   reverse((j).begin(),(j).end())
#define  srt(k)    sort((k).begin(),(k).end())
#define  suni      s.erase(unique(s.begin(),s.end()),s.end())
#define  vuni      v.erase(unique( v.begin(),v.end()),v.end())
#define  puni      v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo       cout<<"Yes"<<endl
#define  no       cout<<"No"<<endl
#define  M        1000000007
#define  pie       acos(-1.0)
#define  pp        endl 
#define  sz        200000
#define m_p        make_pair

ll bin_search(ll x){
    ll lo=1,hi=1e10,mid,ans=1,y;
    if(x==1) return 2;
    while(lo<=hi) {

         mid = lo + (hi - lo ) / 2;

         y = mid * ( mid - 1 ) / 2;
         
         if(y==x) {

                return mid;

         }
         else if(y<x) {
            ans = mid ;
            lo = mid + 1;
         }
         else {
             hi = mid - 1;
         }

    }
    return ans;
}


void Solve()
{
        
        ll i,j,flag=0,c=0,sum=0;

        ll n;cin>>n;

        ll ans = bin_search(n);
        ll p = n - (ans*(ans-1)) / 2;

        cout << ans+p <<pp;


       

        



        
              
              


        
}

int main()
{ 


    ios::sync_with_stdio(false);

        cin.tie(0);


        int tt=1;



        cin>>tt;


        while(tt--)
        {
 
             Solve();

        }


        return 0;
}
              