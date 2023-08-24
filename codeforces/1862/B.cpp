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
              
                ll  i , j , c=0, flag=0, sum=0, n;
                
                cin >> n;
                ll a[n];

               vector<ll>v;
              
                fi(i,0,n-1) {
                    cin >> a[i];
                   
                }
                v.p_b(a[0]);

                for(i=1;i<n-1;i++) {
                    if(a[i]>=a[i-1]){
                        v.p_b(a[i]);
                    }
                    else{
                        v.p_b(1);
                        v.p_b(a[i]);
                    }
                }
                if(n==1){
                    cout << 1 <<pp;
                    cout << a[0] <<pp;
                    return;
                }
                if(a[n-1]>=a[n-2]) v.p_b(a[n-1]);
                else {
                    v.p_b(1); v.p_b(a[n-1]);
                }
                cout << v.size() << pp;
                for(i=0;i<v.size();i++) {
                    cout << v[i] <<" ";
                }
                cout << pp;
              
                


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
              