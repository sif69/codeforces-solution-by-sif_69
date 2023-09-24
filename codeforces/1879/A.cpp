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
              
    ll  i , j , flag=0, sum=0, n , k , x, c=0,carry=0;


             cin >> n;

             ll mx=0;
            
             ll a[n][2];
             for(i=0;i<n;i++) {
                for(j=0;j<2;j++){
                    cin >> a[i][j];
                    if(i!=0){
                       if(a[i][1]>=mx){
                        mx=a[i][1];
                        carry=i;
                       }
                    }
                }
             }

              for(i=1;i<n;i++) {
                if(a[i][0]>=a[0][0]){
                    if(a[i][1]>=a[0][1]){
                        flag=1;
                        break;

                    }
                }
             }
             if(flag) cout << -1 << pp;
             else cout << a[0][0] <<pp;

             

    
              


               
                
           







                

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
              