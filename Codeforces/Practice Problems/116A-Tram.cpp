#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n,e,s; cin>>n;
  int res=0;
  int max=0;
  while(n--){
    cin>>s>>e;
    res -=s;
    res +=e;
    if(res>=max) max=res;
  }
  cout<<max<<endl;
}