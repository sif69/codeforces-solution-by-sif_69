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



// ll vis[1]
void Solve()
{
            ll i,c=0,flag=0,j,n;
            cin>>n;
            ll a[n]; 
            ll b[n]; 
            memset(b,0,sizeof(b)); 
            map<ll,ll>mp,mp1;
            fi(i,0,n-1)
            {
                cin>>a[i];
                mp.insert({a[i],i});
            } 
            if(n==1)
            {
                cout<<-1<<endl;
                return;
            }
            for(i=1;i<=n;i++)
            {
              for(j=0;j<n;j++)
              {
                 if(mp[i]!=j&&b[j]==0)
                 {
                    b[j]=i;
                    break;
                 }
      
                
              }

            }
            if(b[n-1]==0)
            {
            b[n-1]=b[n-2];
            b[n-2]=n;
            }
          
             
            for(i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
           

  
           
            
                          
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
