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

                ll m; cin >> n >> m;
                char a[n][m];
                char ch;

                for(i=0;i<n;i++) {
                    for(j=0;j<m;j++) {
                       cin >> a[i][j];
                    }
                }

                for(j=0;j<m;j++) {
                    for(i=0;i<n;i++) {

                        if(a[i][j]=='v'&&c==0) {
                            c++;
                            break;
                        }
                       if(a[i][j]=='i'&&c==1) {
                            c++;
                            break;
                        }
                        if(a[i][j]=='k'&&c==2) {
                            c++;
                            break;
                        }
                         if(a[i][j]=='a'&&c==3) {
                            c++;
                            break;
                        }
                    }
                }
                if(c==4) yo;
                else no;

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
              