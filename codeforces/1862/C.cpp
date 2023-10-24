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
              
        
            ll i,j,k,c=0,flag=0,c1=0,c2=0;
           
            ll n; cin >>n;

            ll a[n];
            map<ll,ll>mp;
            map<ll,ll>mp1;
            set<ll>st;
            fi(i,0,n-1){

                cin>>a[i];

                mp[a[i]]++;

                st.insert(a[i]);
            } 

            ll pos=n, track_cnt=0,x;

           for(i=n-1;i>0;i--) {
                
                if(a[i]==a[i-1]) continue;
                else{
                    x=a[i]-track_cnt;
                      mp1.insert(m_p(pos,x));
                      track_cnt+=(a[i]-track_cnt);
                     
                      pos=i;
                }

                  
           }
           x=a[i]-track_cnt;
           mp1.insert(m_p(pos,x));
           for(auto itr : st) {
                  
                  if(mp[itr]!=mp1[itr]){
                    flag=1;
                    break;
                  }

           }
           if(flag) no;
           else yo;
        
            
            
           

         
 
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
              