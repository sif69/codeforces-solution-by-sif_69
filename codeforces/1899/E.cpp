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
#define m_p        make_pair

typedef pair<int, int> pi;



void Solve()
{
              
        
            ll i,j,c=1e12,sum=0,flag=0;
            
             ll n; cin>>n;
             ll a[n];
             ll mn=1e12,mx=0,ans=0;
             fi(i,0,n-1) {

                cin >> a[i];
              if(a[i]<mn){
                ans=i;
                mn=a[i];
              }
               
             }
             for(i=ans;i<n-1;i++){
                if(a[i]>a[i+1]){
                    flag=1;
                    break;
                }
             }
             if(flag){
                cout<<-1<<pp;
             }
             else{
                if(ans) cout<<ans<<pp;
                else cout<<ans<<pp;
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
              