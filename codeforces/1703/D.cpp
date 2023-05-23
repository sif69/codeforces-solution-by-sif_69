
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
#define gg greater<ll>()
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

   /*Classical Sliding window algorithm problem*/

       ll i,c=0,cnt=0,flag=0,j,n,sum=0;
      cin>>n; 
      vector<s1>v;
      map<s1,ll>mp,mp1;

      while(n--){

        s1 s; cin>>s; 
        v.p_b(s);
        mp[s]++; 
      }

      s1 p="",k; 
      for(i=0;i<v.size();i++){
        flag=0;
        k=v[i];
        // cout<<k<<pp;
        p="";
        for(j=0;j<k.size();j++){
            p+=k[j];
            if(mp[p]>=1){
                s1 m;
                m=k.substr(j+1,k.size()-j-1);
                // cout<<p<<" "<<m<<pp;
                if(mp[m]>=1){
                    flag=1;
                    break;
                }

            }
        }
        if(flag){
            cout<<1;
        }
        else{
            cout<<0;
        }

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