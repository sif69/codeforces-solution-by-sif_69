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





const int MAX = 1000001;
bool prime[MAX];

void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}



void Solve()
{
        
            ll i,j,flag=0,c=0,d=0;

            ll n,m; cin>>n>>m;

            ll sum=0;

            ll a[n],b[m];
            fi(i,0,n-1) cin>>a[i];
            fi(i,0,m-1) cin>>b[i];
            sort(a,a+n);
            sort(b,b+m);

            ll i1=0,j1=0,i2=m-1,j2=n-1;
            ll f1,f2;

            while(i1<=j2) {
                
                 f1= b[i2] - a[i1];
                 f2= a[j2] - b[j1];
                 if(f1>=f2){
                    i2--;i1++;
                 }
                 else{
                    j1++;
                    j2--;
                 }
                 sum+=max(f1,f2);

            } 
            cout<<sum<<pp;

           
            
            
          

    
       


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
              