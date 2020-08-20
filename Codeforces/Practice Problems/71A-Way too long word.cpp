#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=0,i=0,aux=0;
  cin>>n;
  
  string palabras[n]={};
  while(i<n){
    cin>>palabras[i];  
    ++i;
  }
 
  for(int i=0;i<n;++i){
    if(palabras[i].size()>10){
    aux=palabras[i].size()-1;
    cout<<palabras[i][0]<<aux-1<<palabras[i][aux]<<endl;
    }else{
      cout<<palabras[i]<<endl;
    }
  }
  return 0;
}