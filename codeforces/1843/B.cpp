#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define lg     long long
#define fi(i,L,R) for (ll i = L ; i <= R ; i++)
#define fd(i,R,L) for (ll i = R ; i >= L ; i--)
#define s1      string
#define p_b     push_back
#define st(n)   sort(a,a+n)
#define rev     reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique( v.begin(),v.end()),v.end())
#define puni v1.erase(unique(v1.begin(),v1.end()),v1.end())
#define  yo    cout<<"YES"<<endl
#define  no    cout<<"NO"<<endl
#define pp endl
#define M 1000000007

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


ll d1[]={-1,-1,-1,0,1,1,1,0};
ll d2[]={0,-1,1,-1,0,1,-1,1};



void Solve()
{

               
             ll i,j,c=0,cnt=0,flag=0,n;
             cin>>n; 
             ll a[n];
             ll sum=0;
             for(i=0;i<n;i++){
                cin>>a[i];
                sum+=abs(a[i]); 
             }
             vector<ll>v;
             for(i=0;i<n;i++){
                if(a[i]!=0) v.p_b(a[i]); 
             }
            if(v.size()>=2){
             for(i=0;i<v.size()-1;i++){
                if(v[i]<0&&v[i+1]>0) {
                    flag=i+1;
                    cnt++;
                }
             }
         }
             for(i=flag;i<v.size();i++){
                if(v[i]<0){
                    cnt++;
                    break;
                }
             }
             cout<<sum<<" "<<cnt<<pp;
           
            
           
          
          
             

             
          

            
         
      
   
      


          

   

   
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
