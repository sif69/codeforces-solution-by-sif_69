#include<bits/stdc++.h>
using namespace std;
#define ll    unsigned long long
#define lg   long long
#define fi(i,L,R) for (int i = L ; i <= R ; i++)
#define fd(i,R,L) for (int i = R ; i >= L ; i--)
#define s1   string
#define p_b  push_back
#define st   sort(a,a+n)
#define rev  reverse(a,a+n)
#define revs(j) reverse((j).begin(),(j).end())
#define srt(k)   sort((k).begin(),(k).end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())



int main( )
{
    lg t; cin>>t;
    while(t--)
    {
        lg i,n,c;
        cin>>n;
        c=n;
         lg a[n];
         fi(i,0,n-1)
         {
             cin>>a[i];
         }
         lg j,k=0; s1 s;
          while(n--)
         {
              cin>>j;
              cin>>s;



             for(i=0;i<j;i++)

             {



                 if(s[i]=='U')
                 {
                     if(a[k]==0)
                     {
                         a[k]=9;

                     }
                     else
                     {
                         a[k]--;

                     }
                 }
                 else if(s[i]=='D')
                 {
                     if(a[k]==9)
                     {
                         a[k]=0;

                     }
                     else
                     {
                         a[k]++;

                     }
                 }



             }
             k++;
             s.clear();
         }
         fi(i,0,c-1)
         {
             cout<<a[i]<<" ";

         }


          cout<<endl;

    }

   return 0;
}
