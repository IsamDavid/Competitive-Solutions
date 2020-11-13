#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  long long a,b;
  while(t--){
    cin>>a>>b;
      if(a%b==0){
        cout<<0<<endl;
      }else{
        cout<<b-(a%b)<<endl;
      }
  }
  return 0;
}