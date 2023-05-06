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
ll vis[1000];
map<ll,ll>mp; 
void jo()
{
    ll a,b,i;
    for(i=1;;i++)
    {
        a=i;
        b=i*2;
        if(a+b>1e7)
        {
            break;
        }
        else
        {
            mp.insert({a+b,a});
        }

    }

}
void Solve()
{
            ll i,c=0,flag=0,j,n,sum=0,cnt=0;
          vector<ll>v,v1,v2;

           
           s1 s,p="codeforces";
           ll m; 
           cin>>n>>m;
           map<ll,ll>mp1;
         
           ll x=0,y=0,slag=0;
           if(mp[n])
           {
              x=mp[n];
              y=n-mp[n];
              v.p_b(x);
              v.p_b(y);
              mp1[x]++;
              mp1[y]++;
             
              while(flag==0)
              {
                c=0;
                for(i=0;i<v.size();i++)
                {
                    if(v[i]==m)
                    {
                        slag=1;
                        break;
                    }
                    // cout<<v[i]<<" ";
                    ll k=mp[v[i]];
                    if(k>=1&&mp1[k]<=1)
                    {
                        x=k;
                        y=abs(v[i]-k);
                        mp1[x]++;
                        mp1[y]++;

                        v.p_b(x);
                        v.p_b(y);
                        c++;
                    }

                }
                if(c==0||mp1[1]>=1||slag==1)
                {
                  flag=1;
                }
                srt(v);
                vuni;
               
              }
           }
           
           if(slag==1||n==m) yo;
           else no;
           
         
         



           

  // transform(s.begin(), s.end(), s.begin(), ::tolower);
           

           
              


          
        
         
                                
}

int main()
{
    ios::sync_with_stdio(false);
        cin.tie(0);

        int tt=1;
        jo();
        

        cin>>tt;

        while(tt--)
        {

            Solve();
        }

        return 0;
}