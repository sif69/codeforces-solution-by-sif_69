#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s1 string
#define p_b push_back
/*
To maintain lexicographical order, in the adjacency list, sort all the lists in descending order.
Then perform dfs in descending order, i.e., starting from the last(N'th node) to first.
The idea is to recurse for highest nodes first, since at the end we print the result in reverse order.
Following code will work:
 */
ll vis[10000];
vector<ll>graph[10000];
stack<ll>st;

void toposort(ll n)
{
    vis[n]=1;
    for(int child:graph[n])
    {
        if(!vis[child])
        {
            vis[child]=1;
            toposort(child);
        }
    }
    st.push(n);
}

int main()
{
    ll t;
    cin>>t; 
    while(t--)
    {
        
    ll n,i,j;
    cin>>n; 
    ll a[n][n-1]; 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            cin>>a[i][j]; 
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-1;j++)
        {
             graph[a[i][j]].p_b(a[i][j+1]); 
        }
    }
    
     for(i=1;i<=n;i++)
     {
         if(!vis[i])
         {

             toposort(i);
         }
     }
   while(!st.empty())
   {
       cout<<st.top()<<" ";
       st.pop();
   }
   cout<<endl; 
   for(i=1;i<=n;i++)
   {
       vis[i]=0; 
       graph[i].clear(); 
   }
    }
}
