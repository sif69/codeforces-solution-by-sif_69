
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
       ll i,c=0,j,flag=0,m,n,b; 
       cin>>n; 
       ll a[3][n+1]; 
       ll f1,f2;
       f1=1,f2=1;
       ll ok=0;
       ll l=2*n-1;
       a[f1][f2]=l;
       l=n+1;
       
       while(c<n-1)
       {
        c++; 
           if(ok)
           {
             f1-=1;f2+=1;
             a[f1][f2]=l;

             l++;
             ok=0;
           }
           else
           {
            f1+=1; f2+=1;
            a[f1][f2]=l;
            l++;
            ok=1;
              
           }
       }
       ll l1=2,l2=1;
       l=1;
       a[l1][l2]=l;
       l++; 
      
       ok=0;
       c=0;
       while(c<n-1)
       {
        c++; 
        if(ok)
        {
            l1+=1;
            l2+=1;
            a[l1][l2]=l;
            l++;
            ok=0;
        }

        else
        {
            l1-=1; l2+=1;
            a[l1][l2]=l;
            l++;
            ok=1;
        }

       }

       for(i=1;i<=2;i++)
       {
         for(j=1;j<=n;j++)
         {
            if(i==2 && j==n)
            {
                cout<<2*n;
                continue;
            }
            cout<<a[i][j]<<" ";
         }
         cout<<endl;
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
              