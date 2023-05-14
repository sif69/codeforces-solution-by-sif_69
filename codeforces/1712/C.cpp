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
            ll a[n]; 
            vector<ll>v; 
            map<ll,ll>mp,mp1,mp2;
            fi(i,0,n-1) 
            {
                cin>>a[i];
                mp[a[i]]++;
                mp2[a[i]]++; 
                v.p_b(a[i]); 
            } 
            for(i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<0<<pp;
                return;
            }
          
          for(i=n-1;i>0;i--)
          {
            if(a[i]!=a[i-1]&&mp2[a[i]]>1)
            {
                j=i;
                break;
            }
            else if(a[i]<a[i-1])
            {
                j=i-1;
                break;
            }
            mp2[a[i]]--;

        

          }
        

     
         for(i=0;i<=j;i++)
         {
            cnt+=(mp[a[i]]>=1&&mp1[a[i]]==0);
                    mp1[a[i]]++;  
         }

         cout<<cnt<<pp;
           

        
       

        

           

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