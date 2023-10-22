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

typedef pair<int, int> pi;


void Solve()
{
              
        
            ll i,j,flag=0,c=0,n,l1,R1,cnt=0;

           ll s; cin >>s>>n;
            ll p=s;
            while(s>0){
                cnt+=s%10;
                s/=10;
                c++;
            }
            if(cnt%n==0){
                cout<<p<<pp;
                return;
            }
            ll x;
            
            while(1){
              p++;
              x=p;
              cnt=0;
              while(x>0){
                cnt+=x%10;
                x/=10;
              }
              if(cnt%n==0){
                cout<<p<<pp;
                break;
              }
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
              