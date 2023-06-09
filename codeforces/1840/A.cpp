
#include<bits/stdc++.h>
using namespace std;

#define ll      long long
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
#define pie     acos(-1.0)
#define pp      endl
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

ll d1[]={0,0,-1,1,-1,-1,1,1};
ll d2[]={-1,1,0,0,-1,1,-1,1}; 

void Solve()
{
       ll i,j,cnt=0,flag=0,n,c=0;
       cin>>n; 
       s1 s; cin>>s; 
     
       vector<char>v;
       ll p=0;
       v.p_b(s[p]);
       ll mx=0;
       i=1;

        while(1){
            if(p==n-1||i==n-1) break;

            if(s[p]==s[i]){
                if(i+1<=n-1)v.p_b(s[i+1]);
                p=i+1;
                if(i+2<=n-1)
                  i+=2;
            }
            else
              i++;
        }

       for(auto it:v)
       {
        cout<<it;
       }
       cout<<pp;
     
       
     
     
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
              