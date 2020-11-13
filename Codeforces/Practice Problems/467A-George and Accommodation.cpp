#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p,q,rooms=0; cin>>n;
  while(n--){
    cin>>p>>q;
    if((q-p)>=2) ++rooms;
  }
  cout<<rooms;
  return 0;
}