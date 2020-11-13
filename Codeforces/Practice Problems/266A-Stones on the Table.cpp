#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,cont=0; cin>>n;
  char stone;
  vector<char> colors;
  for(int i=0;i<n;++i){
    cin>>stone;
    colors.push_back(stone);
  }
  for(int i=0;i<n;++i){
    if(i==n-1){
      break;
    }else if(colors[i]==colors[i+1]){
      ++cont;
    }
  }
  cout<<cont;
  return 0;
}