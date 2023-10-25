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

ll give_meXor(ll x){

     if(x%4==0) return x;
     else if(x%4==1) return 1;
     else if(x%4==2) return (x+1);
     else return 0;
}

void Solve()
{
              
        
            ll i,j,k,c=0,flag=0,c1=0,c2=0;

            ll a,b ; cin >>a>>b;

            c2=a;
            
            c1=give_meXor(a-1);
            
           
            if(c1==b){
                cout<<c2<<pp;
                return;
            }

            if((b^c1)!=a){
                cout<<c2+1<<pp;
            }
            else{
                cout<<c2+2<<pp;
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
              