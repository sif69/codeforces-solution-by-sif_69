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





const int MAX = 1000001;
bool prime[MAX];

void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

bool check(ll a[],ll k,ll x,ll n){

    ll i,moves=0;
    for(i=n/2;i<n;i++) {
              
              if(x-a[i]>0) moves+=(x-a[i]);
              if(moves>k) return false;
    }
    return moves<=k;
}

void Solve()
{
        
     ll n,k,i,flag=0,p,c=0; 

     cin>>n;
     ll mx=0,mn=1e12;
     
     vector<ll>v;
     while(n--) {

        ll a,x; cin>>a>>x;
        if(a==1)     mx=max(mx,x);
        else if(a==2) mn=min(mn,x);
        else {
            v.p_b(x);
        }


     }  
     if(mx>mn) cout<<0<<pp;
     else{
        ll ans=mn-mx+1;
        for(i=0;i<v.size();i++){
            if(v[i]>=mx&&v[i]<=mn) ans--;
        }
        cout<<ans<<pp;
       
     }

    
       


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
              