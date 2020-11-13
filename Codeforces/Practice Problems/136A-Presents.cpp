#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,aux; cin>>n;
  vector<int> Pi;

  for(int i=0;i<n;++i){
    cin>>aux;
    Pi.push_back(aux);
  }
  for(int i=1;i<=n;++i){
    for(int j=0;j<n;++j){
      if(Pi[j]==i){
        cout<<j+1<<" ";
      }
    }
  }
  return 0;
}