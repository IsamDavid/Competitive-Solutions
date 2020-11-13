#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a=0,d=0;
  string games; cin>>n>>games;

  for(int i=0;i<n;++i){
    if(games[i]=='D')
      ++d;
    else
      ++a;
  }
  if(d>a){
    cout<<"Danik";
  }else if(d<a){
    cout<<"Anton";
  }else{
    cout<<"Friendship";
  }

  return 0;
}