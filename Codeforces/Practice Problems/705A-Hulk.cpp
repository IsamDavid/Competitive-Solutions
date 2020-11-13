//IsamDavid17
//http://codeforces.com/problemset/problem/705/A
//implementation
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i=1; cin>>n; 
  while(i<=n){
    if(i%2==0){
      cout<<"I love ";
    }else{
      cout<<"I hate ";
    }
    if(i!=n){
    cout<<"that ";
    }
    ++i;
  }
  cout<<"it";
  return 0;
}