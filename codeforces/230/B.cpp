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



ll bin_search(ll n){

    ll lo = 1,hi = n,mid;
    while(lo<=hi) {

        mid = lo + (hi - lo )/2;
       
        if((n%mid==0)&&mid == (n/mid)){
           
            return mid;
        }
        else if ((n%mid==0)&&mid  > n/mid){
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return 0;

}

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
        
     
        ll i,j,flag=0,c=0,sum=0,p;

        ll n; cin>>n; 
        p = sqrt(n);
        

        
        
        
        if(!prime[p]&&p*p==n){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
       

       
}

int main()
{ 


    ios::sync_with_stdio(false);

        cin.tie(0);
        sieve();


        int tt=1;



        cin>>tt;


        while(tt--)
        {
 
             Solve();

        }


        return 0;
}
              