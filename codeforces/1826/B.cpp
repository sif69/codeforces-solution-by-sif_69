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
void Solve()
{
            ll i,c=0,flag=0,j,n,sum=0;
            cin>>n; 
            ll a[n+1];
            vector<ll>v;
            for(i=1;i<=n;i++)
            {
                cin>>a[i];
            }
            ll mx=0,l;

           for(i=1;i<=n/2;i++)
            {
                l=abs(a[i]-a[n-i+1]);
               v.p_b(l);
                
            }
            for(i=0;i<v.size();i++)
            {
                mx=__gcd(mx,v[i]);
            }
            cout<<mx<<endl;
           

            

         



          


           
           
            
           
              


          
        
         
                                
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