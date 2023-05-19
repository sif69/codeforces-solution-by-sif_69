
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
#define pie acos(-1.0)
#define pp endl
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

         ll i,j,c=0,cnt=0,flag=0,n;
         ll odd=0,even=0;
       cin>>n; ll a[n];
       vector<pair<ll,ll>>v;
       vector<ll>v1; 
       fi(i,0,n-1){
        cin>>a[i] ;
        // v.p_b(a[i]); 
        
       }
       sort(a,a+n); 
       for(i=0;i<n;i++){
           
           if(a[i]%2==1){
             odd++;
           v.p_b({a[i],odd-1});
           }
           else{
            v.p_b({a[i],odd});
           }
       }
       ll stat;// 0->>odd,1->>even
       ll p,k,m,track;
       for(auto x:v){

           m=x.first;
           p=x.second;
           k=c-p;
           if(m%2){
            stat=0;
            if(p>=1) stat=2;
           }
           else{
            stat=1;
            if(p>=1) stat=2;
           }
           v1.p_b(stat);
           c++;
           // cout<<p<<" "<<k<<pp;
       }
       ll c1=0,c2=0,c3=0;
       for(i=0;i<v1.size();i++){
          if(v1[i]==1) c1++;
          else if(v1[i]==0) c2++;
          else c3++;
          // cout<<v1[i]<<" ";
       }
       // cout<<pp;
       if(c3+c1==n||c3==n||c3+c2==n||c1==n||c2==n) yo;
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