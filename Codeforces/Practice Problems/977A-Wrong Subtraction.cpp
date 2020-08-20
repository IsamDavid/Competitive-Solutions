#include<bits/stdc++.h>
using namespace std;

int main(){
  int num,n; cin>>num>>n;
  for(int i=0;i<n;++i){
    if(num%2==0 && num%5==0){
      num/=10;
    }else{
      num-=1;
    }
  }
  cout<<num;

  return 0;
}