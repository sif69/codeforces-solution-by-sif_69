#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define p_b push_back
#define s1 string 
#define sz 100000
vector<ll>v; 

void j()
{
    for(ll i=1;i<=sz;i++)
    {
        ll track=(i*(3*i+1))/2; 
        v.p_b(track); 
    }
}

ll bin_search(ll x)
{
    ll lo=0,hi=v.size()-1,mid;
    while(lo<=hi)
    {
        mid = (lo + hi) >> 1; 
        if(x<v[mid])
        {
            hi=mid-1;
        }
        else if(x==v[mid])
        {
            return mid; 
        }
        else
        {
            lo=mid+1;
        }
    }
    return hi; 

}

int main()
{
    //j(); 
    ll t; cin>>t; 
    while(t--)
    {
        ll n,i,j,cnt=0,sum=0;
         cin>>n; 
         char c;
        ll a[n+1][n+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>c;
                a[i][j]=c-'0';
            }
        } 

        for(i=1;i<=(n+1)/2;i++)
        {
            for(j=1;j<=n/2;j++)
            {
                sum = a[i][j] + a[j] [n-(i-1)] + a[n-(i-1)] [n-(j-1)] + a[n-(j-1)] [i];
                cnt+=min(4-sum,sum); 
                //cout<<sum<<endl;
            }

        } 
        cout<<cnt<<endl;


         
        



    }
}