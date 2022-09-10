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


int main()
{



ll t; cin>>t; while(t--)
    {
        ll i,j,c=0,d=0;
        ll a[2][2];
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>a[i][j];

            }
        }
        if(a[0][0]==1)
        {
            c++;
        }
         if(a[0][1]==1)
        {
            c++;
        }
        if(a[1][0]==1)
        {
            d++;
        }
         if(a[1][1]==1)
        {
            d++;
        }
        if(c==2 && d==2)
        {
            cout<<"2"<<endl;
        }
        else if(c==0 && d==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
   return 0;
}
