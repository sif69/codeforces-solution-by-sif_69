#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define lg     long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique( v.begin(),v.end()),v.end())
#define puni v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo    cout<<"YES"<<endl
#define  no    cout<<"NO"<<endl
#define M 1000000007
#define pp endl

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    if(num==1) return flag=false;

    return flag;
}


ll dig(ll n)
{
    ll c=0;
    while(n)
    {
        n/=10;
        c++;
    }
    return c;
}
// ll vis[1]
// ll vis[1000];
// map<ll,ll>mp; 

void Solve()
{
            ll i,c=0,flag=0,j,n,sum=0,cnt=0;
            cin>>n; 
            vector<ll>v(n);
            for(ll& x:v) cin>>x;

           n=unique(v.begin(),v.end())-v.begin();
           
            ll ans=n;

            for(i=0;i<n-2;i++)
            {
                if(v[i]<v[i+1]&&v[i+1]<v[i+2]||v[i]>v[i+1]&&v[i+1]>v[i+2])
                    {
                        ans--;
                    }
            }   
            cout<<ans<<pp; 
        
        
       

        

           

  // transform(s.begin(), s.end(), s.begin(), ::tolower);                            
}

int main()
{
    ios::sync_with_stdio(false);
        cin.tie(0);

        int tt=1;
        // jo();
        

        cin>>tt;

        while(tt--)
        {

            Solve();
        }

        return 0;
}