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

 

        ll i,c=0,cnt=0,n,x,k; 
        cin>>n>>k>>x;
        if(x==1){
            if(k==2){
                if(n%2==0){
                   yo;
                   cout<<n/2<<pp;
                for(i=0;i<n/2;i++){
                    cout<<2<<" ";
                }
                  cout<<pp;}
                else{
                    no;
                }
                
            }
            if(k>2){
                yo;
                if(n%2==0){
                   cout<<n/2<<pp;
                   for(i=0;i<n/2;i++){
                    cout<<2<<" ";
                 }
               }
               else{
                 cout<<n/2<<pp;
                 for(i=0;i<n/2 -1 ;i++){
                    cout<<2<<" ";
                 }
                 cout<<3;
               }
                cout<<pp;
            }
          else if(k==1&&x==1){
            no;
          }
        
          
        }
        else if(x!=1){
            yo;
            cout<<n<<pp;
            for(i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<pp;
        }
        else{
            no;
        }
        
       


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
