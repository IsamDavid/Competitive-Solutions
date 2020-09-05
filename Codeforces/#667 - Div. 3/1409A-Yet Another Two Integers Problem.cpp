#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,a,b,aux; cin>>t;
  while(t--){
    cin>>a>>b;
    aux=abs(a-b);
    if(a==b){
      cout<<0<<endl;
    }else if(aux%10==0){
      cout<<aux/10<<endl;
    }else{
      cout(aux/10)+1<<endl;
    }
  }
  return 0;
}