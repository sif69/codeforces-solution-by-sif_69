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
#define  yo       cout<<"YES"<<endl
#define  no       cout<<"NO"<<endl
#define  M        1000000007
#define  pie       acos(-1.0)
#define  pp        endl 
#define  sz        200000


 

void Solve()
{
          
          ll i , j , c=0;
          ll n,k; 
          cin>>n>>k;
          ll a[n];
          map<ll,ll>mp;
        
          fi(i,0,n-1){
            cin>>a[i]; 
            mp[a[i]]++;
         
          }
       
         ll x=a[0],y=a[n-1];
         ll c1=0,c2=0;
         ll p1,p2;
         for(i=0;i<n;i++){
            if(a[i]==x) c1++;

            if(c1==k){
                p1=i;
                break;
            }
         }
         for(i=n-1;i>=0;i--){
            if(a[i]==y) c2++;
            if(c2==k){
                p2=i;
                break;
            }
         }
        
       if(mp[x]>=k && x==y){
        yo;
       }
      else if(mp[y]>=k && x==y){
        yo;
       }
       else if(p1<p2&&c1==k&&c2==k) yo;
       else no;


         



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
              