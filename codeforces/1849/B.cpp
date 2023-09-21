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
              
                ll  i , j , flag=0, sum=0, n , k , x;

                cin >> n >> k; 

                ll a[n];


           
                vector<ll>v;
                vector<pair<ll,ll>>ans;

                fi(i,0,n-1) {

                     cin >> x;
                     a[i]=(x)%k;
                     if(!a[i])
                        v.p_b(i+1);
                    else
                        ans.p_b({a[i],i+1}); 
                    
                }

                sort(ans.begin(),ans.end(),[&](pair<ll,ll>x,pair<ll,ll>y)
                      {
                        if(x.first==y.first){
                            return (x.second<y.second);
                        }
                        return x.first>y.first;
                      }
                    );

                for(auto it:ans){
                    v.p_b(it.second);
                }

                for(auto it:v){
                    cout << it <<" ";
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
              