#include<bits/stdc++.h>
#define ll long long
#define fir first
#define sec second
#define pii pair<int,int>
using namespace std;

const int maxn=200005;
const int inf=0x3f3f3f3f;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        int sum0=0;
        bool f=false;
        int x; 
        for(int i=1;i<=n;i++) {
            
            cin>>x;
            if(x==0) {
                sum0++;
            } else if(x>=2) {
                f=true;
            }
        }
        ll rem=n-sum0; 

        if(sum0<=rem+1) {
            cout<<"0\n";
        } else if(f||sum0==n) {
            cout<<"1\n";
        } else {
            cout<<"2\n";
        }
    }
}