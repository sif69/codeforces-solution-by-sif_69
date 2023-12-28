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
#define  yo       cout<<"Yes"<<endl
#define  no       cout<<"No"<<endl
#define  M        1000000007
#define  pie       acos(-1.0)
#define  pp        endl 
#define  sz        200000
#define m_p        make_pair



void Solve()
{
              
           char a[3][3];

           ll i,j;
           char ch;
           map<char,ll>mp;
           for(i=0;i<3;i++){
             for(j=0;j<3;j++){
                cin>>ch;
                mp[ch]++;
             }
           }
           if(mp['A']!=3) cout<<"A"<<pp;
           else if(mp['B']!=3) cout<<"B"<<pp;
           else cout<<"C"<<pp;


           
        
           
    
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
              