#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    
    int i=1;
    while(1){
   
        if(m==0){
            break;
        }
        if(i==n+1){
            i=1;
        }
       
       if(m>=i){
        m-=i;
       }
       else{
        break;
       }
       i++;
    }
    cout<<m<<endl;
}