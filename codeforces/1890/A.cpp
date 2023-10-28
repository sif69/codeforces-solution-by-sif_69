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

bool check(ll n){

    ll p=0;
    while(n>1){
        n/=2;
        if(n%2==1&&n>1){
            p=1;
            break;
        }
    }
    return (p==0);
}

void Solve()
{
              
        
        ll i=0,j=0,k=0,c=0,flag=0,flag1=0,c1=0,c2=0,sum=0;
        
          ll n ; cin >>n; 
          ll a[n];
          map<ll,ll>mp;
          set<ll>st;
          vector<ll>v;
          fi(i,0,n-1) {

             cin >> a[i];
            
             v.p_b(a[i]);
             mp[a[i]]++;
          }
          srt(v);
          vuni;
          if(v.size()==1||n==2){
            yo;

          }
          else if(v.size()==2){
            if(abs(mp[v[0]]-mp[v[1]])==0||abs(mp[v[0]]-mp[v[1]])==1) yo;
            else no;
          }
          else{
            no;
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
              