// UVA | 11172 - Relational Operator
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t=0; cin>>t;
  int a,b;
  while(t--){
    cin>>a>>b;
    if(a>b){
      cout<<">"<<endl;
    }else if(a<b){
      cout<<"<"<<endl;
    }else{
      cout<<"="<<endl;
    }
  }
  return 0;
}