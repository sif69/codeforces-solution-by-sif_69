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
        
        ll i,j,flag=0,c=0,sum=0,p;

        ll n; cin>>n; 

        // ll a[n+1];
        // map<ll,ll>mp;
        // vector<ll>v,v1;

    set<int>st;
    for(i=1;i<=n;i++){st.insert(i);}
        vector<int> rem;
        for(int i=0;i<n;i++){
            int v;
            cin >> v;
            if(st.find(v)!=st.end()){st.erase(v);}
            else{rem.push_back(v);}
        }
        sort(rem.begin(),rem.end());
        reverse(rem.begin(),rem.end());
        int pt=0;
        
        for(auto &nx : rem){
            auto it=st.end();
            it--;
            int p=(*it);
            if(p>(nx-1)/2){flag=1;break;}
            st.erase(it);
        }
        if(flag){cout << "-1\n";}
        else{cout << rem.size() << '\n';}
    


           

         

      

       
       

        



        
              
              


        
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
              