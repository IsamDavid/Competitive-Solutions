#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int aux=0;
  bool flag=1;
  while(n--){ 
    cin>>aux;
    if(aux==1){
      cout<<"HARD";
      flag=0;
      break;
    }
  }
  if(flag==1) cout<<"EASY";
  
  return 0;
}