#include<bits/stdc++.h>
using namespace std;
#define ll   unsigned long long
#define lg   long long
#define f    for(i=0;i<n;i++)
#define f1   for(j=0;j<m;j++)
#define f2   for(i=0;i<s.size();i++)
#define f3   for(i=n;i>=0;i--)
#define s1   string
#define p_b  push_back
#define st   sort(a,a+n)
#define sts  sort(s.begin(),s.end())
#define stv  sort(v.begin(),v.end())
#define suni s.erase(unique(s.begin(),s.end()),s.end())
#define vuni v.erase(unique(v.begin(),v.end()),v.end())



int main()
{

  ll t ;cin>>t; while(t--)
  {
   ll n,i; cin >> n;
   ll a[n] ;
        for (i = 0; i < n; ++i)
            cin >> a[i];

        if (n % 2 == 1) {
            cout << "Mike"<<endl;
            continue;
        }

        ll smallest = 0;
        for (i = 0; i <n; ++i)
            if (a[i] < a[smallest])
                smallest = i;

        if (smallest % 2 == 0) cout << "Joe"<<endl;
        else cout << "Mike"<<endl;
      
  }

   return 0;
}