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
void Solve()
{
            ll i,c=0,flag=0,j,n,sum=0,cnt=0;
          vector<ll>v,v1,v2;
           map<ll,ll>mp; 
           s1 s,p="codeforces";
           cin>>n; 
           ll x,y;
           while(n--)
           {
             cin>>j>>s;
             x=s[0]-'0';
             y=s[1]-'0';
             if(x==1&&y==1) v.p_b(j);
             else if(x==1&&y==0) v1.p_b(j);
             else if(x==0&&y==1) v2.p_b(j);
             // cout<<x<<y<<endl;
             

           }
           if(v1.size()>=1&&v2.size()>=1)
           {
          srt(v2);
          srt(v1);
          }
          srt(v);
          ll ans=1e12;
          if(v1.size()>=1&&v2.size()>=1)
          {
              ans=(v2[0]+v1[0]);
          }
          if(v.size()>=1)
          {
            ans=min(ans,v[0]);
          }
          if(ans==1e12) cout<<-1<<pp;
          else cout<<ans<<pp;




           

  // transform(s.begin(), s.end(), s.begin(), ::tolower);
           

           
              


          
        
         
                                
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