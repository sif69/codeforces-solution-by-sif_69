#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define s1 string

int main()
{
   ll t; cin>>t;
   while(t--)
   {
      ll n,k,i,x,y,sum=0;
      cin>>n>>k;
      s1 s; cin>>s;
      map<char,ll>mp,mp1;
      map<ll,ll>mp2;

      char in;
      vector<ll>v,v1,v2,v3,v4;
      for(i=0;i<n;i++)
      {
         mp[s[i]]++;
      }
       transform(s.begin(), s.end(), s.begin(), ::tolower);
      for(i=0;i<n;i++)
      {

          if(mp1[s[i]]==0)
          {

              in=(char)(s[i]-32);


          x=mp[s[i]];
          y=mp[in];


          v.p_b(x);
          v1.p_b(y);
           mp1[s[i]]++;
          }




      }
        ll a,b;
      priority_queue<pair<int,int>>pq;
      for(i=0;i<v.size();i++)
      {

          pq.push({v[i],v1[i]});
      }
      while (!pq.empty()) {
            a=pq.top().first;
            b=pq.top().second;
            sum+=min(a,b);
            v2.p_b(abs(a-b));

        pq.pop();
    }





     sort(v2.begin(),v2.end());
     reverse(v2.begin(),v2.end());
      i=0; ll d;
      while(k>0 && i<v2.size())
      {
        d=(v2[i])/2;
        if(v2[i]>1)
        {
            sum+=min(d,k);
            k-=min(d,k);
        }
        i++;
      }
     cout<<sum<<endl;

}
}
