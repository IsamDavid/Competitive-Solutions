#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,aux,primero,final,i=0,j; cin>>n;
  vector<int> array;
  for(int i=0; i<n;++i){
    cin>>aux;
    array.push_back(aux);
  }

  sort(array.begin(),array.end());
  j=n-1;
  if(n&1==1){
    for(int i=0;i<n;++i){
      if(i==j){
        break;
      }
      j--;
    }
    cout<<array[j]; 
  }else{
    for(int i=0;i<n;++i){
      if(i>j){
        break; 
      }
      j--;
    }
    cout<<array[j]; 
  }
  return 0;
}
