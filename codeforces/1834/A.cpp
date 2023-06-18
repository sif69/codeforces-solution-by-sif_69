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

bool checkdec(ll p){
    if(p>=0&&p<=9) return true; 
    return false;
}
bool checkchar(char ch){
    if((ch=='*'||ch=='-'||ch=='+'||ch=='/'))
          return true;

      return false;
}

void Solve()
{

               
         ll i,j,c=0,cnt=0,flag=0,n;

         cin>>n; 
         ll p=0,q=0;
         ll a[n];
         fi(i,0,n-1){
            cin>>a[i];
            if(a[i]>0) p++;
            else q++;
         }
       if(p>=q&&q%2==0) cout<<0<<pp;
       else if(p>=q&&q%2!=0) cout<<1<<pp;
       else if(p<q){
          ll sum=(p+q+1)/2;
         
          ll d=abs(sum-p);
         
          if((q-d)%2) cout<<d+1<<pp;
          else cout<<d<<pp;
          
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
