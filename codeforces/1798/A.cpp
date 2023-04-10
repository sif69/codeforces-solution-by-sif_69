
#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define lg      long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)  sort((k).begin(),(k).end())
#define suni    s.erase(unique(s.begin(),s.end()),s.end())
#define vuni    v.erase(unique( v.begin(),v.end()),v.end())
#define puni    v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo     cout<<"YES"<<endl
#define  no     cout<<"NO"<<endl
#define  M      1000000007
#define pie acos(-1.0)
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    if(num==1) return flag=false;

    return flag;
}




void Solve()
{

          ll i,j,c=0,flag=0,n;
  
           vector<ll>v; 
           cin>>n; 
           ll a[n],b[n]; 
           ll mx=-1,mx1=-1;
           fi(i,0,n-1) 
           {
            cin>>a[i]; 
            mx=max(mx,a[i]); 
           }
           fi(i,0,n-1)
           {
            cin>>b[i] ;
            mx1=max(mx1,b[i]); 
           }
           ll l=-1,r=-1;
           for(i=0;i<n;i++)
           {
            if(a[i]>a[n-1])
            {
                swap(a[i],b[i]); 
            }
           
           }
           for(i=0;i<n;i++)
           {
            if(b[i]>b[n-1])
            {
                swap(b[i],a[i]);
            }
           }
           for(i=0;i<n;i++)
           {
             l=max(l,a[i]); 
             r=max(r,b[i]); 
           }
           if(a[n-1]==l && b[n-1]==r) yo;
           else no;
           // for(i=0;i<n;i++)
           // {
           //  cout<<a[i]<<" ";
           // }
           

         
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