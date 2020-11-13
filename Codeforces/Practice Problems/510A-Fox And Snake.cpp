#include<bits/stdc++.h>
using namespace std;

void snake(int m){
  for(int i=0;i<m;++i){
    cout<<"#";
  }
  cout<<endl;
}


void space(int m){
  for(int i=0;i<m-1;++i){
  cout<<".";
  }
}


int main(){
  int n,m,cont=1; cin>>n>>m;

  for(int i=1;i<=n;++i){
    if(i%2==0){
      if(cont%2==0){
        cout<<"#";
        space(m);
        cout<<endl;
        ++cont;
      }else{
        space(m);
        cout<<"#"<<endl;
        ++cont;
      }
    }else{
    snake(m);
    }
  }
  return 0;
}